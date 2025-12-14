#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14168;
signed char var_4 = (signed char)44;
short var_5 = (short)-3832;
short var_7 = (short)12379;
int var_8 = -1297717235;
int var_10 = -1768190397;
int zero = 0;
unsigned long long int var_14 = 2657538846916012875ULL;
_Bool var_15 = (_Bool)1;
int var_16 = 615672825;
long long int var_17 = 4684424742734867854LL;
void init() {
}

void checksum() {
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
