#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_7 = (unsigned short)48097;
unsigned int var_9 = 3113820420U;
signed char var_10 = (signed char)-98;
short var_11 = (short)-26265;
_Bool var_12 = (_Bool)1;
long long int var_13 = -819632214659787694LL;
unsigned short var_14 = (unsigned short)47282;
int zero = 0;
long long int var_16 = 1878682848461737076LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
