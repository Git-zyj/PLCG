#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)50509;
long long int var_6 = 3967424459640972187LL;
unsigned short var_7 = (unsigned short)40648;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)63777;
signed char var_11 = (signed char)51;
int var_12 = 1240351286;
signed char var_13 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
