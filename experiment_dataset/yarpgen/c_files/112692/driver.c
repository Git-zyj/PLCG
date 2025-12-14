#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)11298;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 345593058U;
signed char var_14 = (signed char)13;
int zero = 0;
long long int var_18 = -4808772123092467791LL;
unsigned short var_19 = (unsigned short)29434;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
