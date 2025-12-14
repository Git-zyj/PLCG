#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9836355905319409579ULL;
unsigned int var_3 = 1220808084U;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)59515;
int zero = 0;
int var_19 = -1231106346;
short var_20 = (short)-1801;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
