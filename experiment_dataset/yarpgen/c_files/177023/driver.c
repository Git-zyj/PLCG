#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)10;
unsigned char var_7 = (unsigned char)145;
unsigned long long int var_9 = 11205676684947472781ULL;
int var_12 = -1925537055;
int zero = 0;
long long int var_14 = 3557452243196848406LL;
unsigned short var_15 = (unsigned short)29663;
short var_16 = (short)29407;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
