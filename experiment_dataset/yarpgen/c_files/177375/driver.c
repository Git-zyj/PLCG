#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2528970454857366799LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 6597321119668364649ULL;
unsigned short var_6 = (unsigned short)59985;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2059291060U;
short var_10 = (short)-22289;
signed char var_13 = (signed char)100;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)114;
unsigned long long int var_16 = 9943465191096525294ULL;
short var_17 = (short)4636;
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
