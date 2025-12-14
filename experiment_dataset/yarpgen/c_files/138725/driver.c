#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)214;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)50256;
short var_15 = (short)-22536;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 5219503813667527566ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
