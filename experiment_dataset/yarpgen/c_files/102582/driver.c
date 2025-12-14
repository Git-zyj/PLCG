#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -481150928;
unsigned char var_3 = (unsigned char)244;
int var_4 = 2025843696;
unsigned long long int var_7 = 11122322336454829592ULL;
int zero = 0;
unsigned long long int var_13 = 17622893642599594874ULL;
unsigned char var_14 = (unsigned char)35;
unsigned long long int var_15 = 11767487068876135721ULL;
void init() {
}

void checksum() {
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
