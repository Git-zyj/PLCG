#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4791996776523635418ULL;
unsigned short var_8 = (unsigned short)28497;
long long int var_11 = -7287235896970211983LL;
unsigned int var_14 = 2856032700U;
unsigned short var_15 = (unsigned short)40421;
unsigned long long int var_16 = 3091126327183460985ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)49324;
unsigned char var_19 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
