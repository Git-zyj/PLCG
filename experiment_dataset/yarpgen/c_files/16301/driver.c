#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)228;
unsigned short var_7 = (unsigned short)2065;
_Bool var_8 = (_Bool)1;
unsigned char var_12 = (unsigned char)235;
int zero = 0;
unsigned int var_20 = 2693417808U;
unsigned long long int var_21 = 13778177072941736819ULL;
long long int var_22 = -5330532483941352936LL;
void init() {
}

void checksum() {
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
