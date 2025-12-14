#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)173;
int var_4 = -1592639330;
unsigned char var_5 = (unsigned char)116;
long long int var_6 = -4640451433986132176LL;
long long int var_8 = 2177167511708458585LL;
unsigned int var_10 = 1950490185U;
int zero = 0;
unsigned int var_11 = 3996204511U;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
long long int var_14 = -6367707656871027827LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
