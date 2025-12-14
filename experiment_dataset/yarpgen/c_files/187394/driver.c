#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4922453650309039763LL;
unsigned long long int var_6 = 18258274188098672388ULL;
unsigned int var_8 = 3105156328U;
int zero = 0;
unsigned short var_15 = (unsigned short)34879;
unsigned char var_16 = (unsigned char)48;
unsigned short var_17 = (unsigned short)634;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
