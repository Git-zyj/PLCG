#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3546364731U;
_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_11 = (unsigned short)28889;
unsigned long long int var_14 = 15402850711972434244ULL;
int zero = 0;
unsigned int var_18 = 2717728366U;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
