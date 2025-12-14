#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 295203245494286116ULL;
_Bool var_4 = (_Bool)1;
int var_7 = -1408758375;
unsigned char var_13 = (unsigned char)185;
unsigned short var_17 = (unsigned short)36141;
int zero = 0;
unsigned int var_18 = 1608923240U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 601953560U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
