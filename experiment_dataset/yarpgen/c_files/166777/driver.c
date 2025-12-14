#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -532945621;
_Bool var_2 = (_Bool)0;
long long int var_3 = -4423496454633615279LL;
short var_7 = (short)5816;
int var_8 = 840010703;
int var_11 = -1478915752;
int zero = 0;
unsigned int var_13 = 366424008U;
unsigned long long int var_14 = 5844246609616591126ULL;
signed char var_15 = (signed char)55;
short var_16 = (short)-17513;
short var_17 = (short)15353;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
