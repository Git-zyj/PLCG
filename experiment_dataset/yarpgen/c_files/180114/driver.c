#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-54;
signed char var_3 = (signed char)123;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3192823758U;
signed char var_7 = (signed char)25;
signed char var_10 = (signed char)-11;
long long int var_11 = -74386600183886432LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
short var_16 = (short)25648;
int var_17 = -1464910437;
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
