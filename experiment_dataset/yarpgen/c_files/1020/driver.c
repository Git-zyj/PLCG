#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50176;
unsigned long long int var_3 = 6540238717248634859ULL;
unsigned char var_8 = (unsigned char)116;
unsigned int var_14 = 1171647195U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2315736663U;
unsigned int var_17 = 3491955877U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
