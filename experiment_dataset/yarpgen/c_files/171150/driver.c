#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6295664021612531833LL;
unsigned int var_2 = 4026624156U;
int var_5 = -1022556841;
int var_6 = 140225598;
int var_7 = 1031747920;
unsigned int var_8 = 4270337314U;
long long int var_9 = 2937734703945509654LL;
long long int var_10 = 4296296561911275051LL;
int zero = 0;
unsigned int var_15 = 2341547283U;
int var_16 = 604194010;
long long int var_17 = -3016679364458865374LL;
long long int var_18 = 4020152372610385222LL;
unsigned int var_19 = 444778614U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
