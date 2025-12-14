#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 2486050357U;
short var_5 = (short)23083;
signed char var_6 = (signed char)18;
signed char var_7 = (signed char)66;
short var_8 = (short)28328;
unsigned long long int var_10 = 2423540634390347443ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)48577;
long long int var_12 = 3177902942099732921LL;
long long int var_13 = -5839186152134797087LL;
unsigned short var_14 = (unsigned short)10352;
unsigned long long int var_15 = 3142677415107417441ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
