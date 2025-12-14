#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8959636972061495124ULL;
unsigned short var_4 = (unsigned short)53974;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int zero = 0;
int var_19 = -890223203;
unsigned int var_20 = 4263397120U;
short var_21 = (short)-20078;
unsigned char var_22 = (unsigned char)252;
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
