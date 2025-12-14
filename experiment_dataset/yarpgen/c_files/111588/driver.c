#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)146;
unsigned char var_4 = (unsigned char)71;
signed char var_8 = (signed char)2;
unsigned long long int var_14 = 9438918755731515190ULL;
int zero = 0;
int var_16 = -1319907618;
_Bool var_17 = (_Bool)1;
short var_18 = (short)1712;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
