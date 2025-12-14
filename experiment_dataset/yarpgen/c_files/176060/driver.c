#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)159;
long long int var_7 = 5219572710956717807LL;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)59;
int zero = 0;
unsigned char var_13 = (unsigned char)215;
signed char var_14 = (signed char)-117;
short var_15 = (short)215;
signed char var_16 = (signed char)73;
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
