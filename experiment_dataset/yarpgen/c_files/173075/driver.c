#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1057574663;
unsigned long long int var_10 = 3266866236461358079ULL;
unsigned short var_14 = (unsigned short)13672;
int var_15 = -474934330;
unsigned long long int var_18 = 14223654469942912897ULL;
int zero = 0;
unsigned long long int var_19 = 3463260321610471741ULL;
unsigned char var_20 = (unsigned char)227;
int var_21 = 425244138;
signed char var_22 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
