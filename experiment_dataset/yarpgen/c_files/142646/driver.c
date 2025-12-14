#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56285;
short var_6 = (short)-6621;
long long int var_7 = 3468427955763549977LL;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)7;
unsigned long long int var_15 = 14631287679378614862ULL;
signed char var_16 = (signed char)23;
void init() {
}

void checksum() {
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
