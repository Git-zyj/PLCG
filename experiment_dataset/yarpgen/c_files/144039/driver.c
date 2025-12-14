#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)45;
unsigned char var_7 = (unsigned char)179;
unsigned int var_13 = 1008470091U;
unsigned char var_15 = (unsigned char)183;
unsigned int var_16 = 3817241083U;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)98;
unsigned char var_23 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
