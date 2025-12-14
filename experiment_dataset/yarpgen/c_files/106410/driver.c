#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 18363682800880302728ULL;
unsigned int var_10 = 3668937839U;
unsigned long long int var_16 = 6015469319815212482ULL;
int zero = 0;
int var_20 = 1983222081;
int var_21 = 1179533486;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
