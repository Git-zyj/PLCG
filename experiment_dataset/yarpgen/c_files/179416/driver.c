#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1520326305U;
unsigned int var_4 = 3562327392U;
_Bool var_5 = (_Bool)0;
long long int var_6 = -5006973185408586639LL;
unsigned char var_10 = (unsigned char)48;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)159;
unsigned long long int var_18 = 4324217586747860345ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
