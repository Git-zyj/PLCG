#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)23147;
unsigned long long int var_3 = 5848845176343768737ULL;
unsigned long long int var_5 = 848177297832685728ULL;
short var_6 = (short)-26331;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)30716;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)23007;
int zero = 0;
unsigned long long int var_14 = 12884018364136734671ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)59390;
_Bool var_17 = (_Bool)1;
int var_18 = -1274660314;
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
