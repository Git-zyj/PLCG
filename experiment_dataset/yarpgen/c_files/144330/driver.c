#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)0;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 5496393585309042949ULL;
unsigned char var_10 = (unsigned char)156;
int zero = 0;
unsigned long long int var_12 = 13310759539873068455ULL;
long long int var_13 = -4844874378978930506LL;
unsigned char var_14 = (unsigned char)95;
signed char var_15 = (signed char)60;
unsigned long long int var_16 = 5505467656791457647ULL;
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
