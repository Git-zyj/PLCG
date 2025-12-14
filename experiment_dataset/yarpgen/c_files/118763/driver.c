#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58650;
int var_5 = 1499481766;
unsigned long long int var_8 = 17732275731635640492ULL;
signed char var_10 = (signed char)8;
int zero = 0;
unsigned int var_12 = 811310643U;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)51;
unsigned int var_15 = 1224170787U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
