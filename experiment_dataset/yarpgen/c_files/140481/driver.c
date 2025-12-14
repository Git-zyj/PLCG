#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 499895338U;
int var_2 = -752610353;
signed char var_3 = (signed char)66;
unsigned int var_5 = 1312292118U;
unsigned long long int var_10 = 7567098181401183688ULL;
long long int var_11 = -5752604306739340620LL;
signed char var_13 = (signed char)-33;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1455306009U;
unsigned int var_16 = 299636340U;
long long int var_17 = -3317431331350553410LL;
unsigned short var_18 = (unsigned short)27320;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
