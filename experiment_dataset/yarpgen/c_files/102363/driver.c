#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)11843;
signed char var_11 = (signed char)-97;
unsigned short var_13 = (unsigned short)4210;
unsigned short var_14 = (unsigned short)29764;
int zero = 0;
int var_20 = -1774027927;
unsigned int var_21 = 4214250288U;
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
