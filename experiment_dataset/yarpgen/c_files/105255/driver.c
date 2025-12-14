#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44383;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
long long int var_7 = 8075546001056099446LL;
unsigned short var_8 = (unsigned short)30111;
unsigned int var_9 = 1263372535U;
long long int var_10 = -4692408638246412795LL;
unsigned short var_11 = (unsigned short)8705;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 610528641U;
short var_16 = (short)6389;
int zero = 0;
short var_17 = (short)24555;
short var_18 = (short)-26485;
unsigned short var_19 = (unsigned short)18258;
short var_20 = (short)-16643;
long long int var_21 = 2439513377517813715LL;
unsigned short var_22 = (unsigned short)57544;
unsigned int var_23 = 3698930576U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
