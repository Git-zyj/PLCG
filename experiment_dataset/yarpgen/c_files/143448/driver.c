#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
unsigned char var_4 = (unsigned char)239;
int var_5 = -1290660730;
unsigned long long int var_7 = 14309642927697719358ULL;
int zero = 0;
unsigned int var_11 = 1985057750U;
unsigned int var_12 = 1325513905U;
int var_13 = -945686541;
int var_14 = 1830316209;
long long int var_15 = 3808921456974399602LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
