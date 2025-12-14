#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3253349824U;
long long int var_5 = -5022683877189678306LL;
short var_8 = (short)29313;
unsigned int var_12 = 1527065380U;
short var_15 = (short)14546;
unsigned int var_16 = 2883058846U;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)22649;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3595890831U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
