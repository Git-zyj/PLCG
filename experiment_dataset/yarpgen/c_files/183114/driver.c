#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1611245313U;
short var_6 = (short)-4998;
unsigned short var_11 = (unsigned short)42875;
unsigned char var_13 = (unsigned char)152;
long long int var_15 = 361333931979171513LL;
int zero = 0;
unsigned short var_19 = (unsigned short)25603;
unsigned char var_20 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
