#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2025150847U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2874630389U;
unsigned char var_10 = (unsigned char)175;
unsigned short var_11 = (unsigned short)27632;
int zero = 0;
int var_13 = 1330632446;
unsigned long long int var_14 = 11138961817554475317ULL;
unsigned int var_15 = 3133132491U;
unsigned int var_16 = 3477274435U;
void init() {
}

void checksum() {
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
