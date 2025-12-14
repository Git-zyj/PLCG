#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26244;
_Bool var_1 = (_Bool)0;
short var_2 = (short)14445;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 4203796731U;
unsigned int var_10 = 3909659898U;
long long int var_12 = 7129090853066042569LL;
long long int var_13 = 6578165927152976697LL;
int zero = 0;
unsigned short var_14 = (unsigned short)691;
short var_15 = (short)-14769;
unsigned long long int var_16 = 5047863633291465665ULL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)8;
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
