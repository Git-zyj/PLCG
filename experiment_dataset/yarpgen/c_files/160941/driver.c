#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 433241939U;
long long int var_2 = 8721335786490327685LL;
unsigned int var_4 = 2780182223U;
unsigned int var_5 = 2284323665U;
unsigned int var_7 = 2002981727U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 2168298023U;
int var_11 = 392060514;
unsigned long long int var_12 = 10621906274511859091ULL;
signed char var_13 = (signed char)100;
unsigned int var_14 = 569010804U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
