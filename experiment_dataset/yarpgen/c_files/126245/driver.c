#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17875;
unsigned short var_3 = (unsigned short)18181;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 17463370740276762629ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)17027;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 897423982U;
unsigned int var_20 = 3953721966U;
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
