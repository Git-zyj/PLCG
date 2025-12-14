#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)90;
unsigned int var_5 = 4269420195U;
unsigned long long int var_14 = 15688867390698748395ULL;
unsigned char var_15 = (unsigned char)32;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)46585;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 276502725U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
