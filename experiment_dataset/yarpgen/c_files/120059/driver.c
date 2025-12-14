#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 406732923;
signed char var_5 = (signed char)-31;
unsigned short var_6 = (unsigned short)38901;
unsigned short var_8 = (unsigned short)47389;
unsigned int var_9 = 2933099902U;
long long int var_10 = -160786586334298795LL;
short var_12 = (short)-16059;
short var_13 = (short)19898;
int zero = 0;
long long int var_15 = -6430745300959196019LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-3650;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
