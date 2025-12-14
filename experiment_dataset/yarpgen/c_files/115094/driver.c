#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 740356937;
unsigned short var_6 = (unsigned short)14064;
signed char var_11 = (signed char)-94;
int zero = 0;
int var_16 = -622143979;
long long int var_17 = -8861170357412271296LL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-13477;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
