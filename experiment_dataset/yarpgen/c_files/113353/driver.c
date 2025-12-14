#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-23776;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_7 = (short)3875;
short var_9 = (short)-29624;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-20645;
short var_13 = (short)21293;
int zero = 0;
short var_14 = (short)24509;
short var_15 = (short)-27859;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
