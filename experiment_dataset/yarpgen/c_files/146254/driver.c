#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56882;
unsigned int var_5 = 1046624722U;
long long int var_7 = 4293208356696195407LL;
unsigned int var_10 = 1000047738U;
long long int var_12 = 7894876015162824566LL;
signed char var_13 = (signed char)86;
int zero = 0;
int var_18 = -662665883;
_Bool var_19 = (_Bool)1;
int var_20 = 8831849;
long long int var_21 = -5270612946832170387LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
