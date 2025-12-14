#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3843706889074693448LL;
short var_6 = (short)6135;
unsigned char var_7 = (unsigned char)224;
unsigned char var_8 = (unsigned char)48;
unsigned char var_15 = (unsigned char)15;
int zero = 0;
signed char var_16 = (signed char)-59;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
