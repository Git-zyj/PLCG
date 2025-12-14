#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28222;
long long int var_4 = 3812507215348498404LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-50;
signed char var_12 = (signed char)90;
signed char var_14 = (signed char)97;
int zero = 0;
int var_15 = -1283853164;
unsigned int var_16 = 2250340986U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
