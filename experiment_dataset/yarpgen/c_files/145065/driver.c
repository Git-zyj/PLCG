#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23707;
int var_4 = 1358941107;
unsigned short var_10 = (unsigned short)43394;
unsigned short var_13 = (unsigned short)51997;
int var_15 = 1881617699;
unsigned short var_18 = (unsigned short)1351;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)29000;
unsigned long long int var_22 = 6912783062785420788ULL;
long long int var_23 = -8215955622982263157LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
