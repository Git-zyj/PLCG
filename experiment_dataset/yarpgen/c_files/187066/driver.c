#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3737806343455791996LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 13307404187571875053ULL;
int var_3 = -65060342;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-117;
unsigned int var_13 = 2075601229U;
int zero = 0;
short var_14 = (short)28147;
unsigned short var_15 = (unsigned short)34447;
long long int var_16 = 1314676855629450066LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
