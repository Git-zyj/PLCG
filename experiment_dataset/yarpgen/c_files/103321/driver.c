#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 953427181U;
short var_5 = (short)-11131;
_Bool var_6 = (_Bool)0;
short var_7 = (short)26724;
signed char var_11 = (signed char)-68;
long long int var_12 = 142295156716383653LL;
int zero = 0;
unsigned int var_15 = 4192303195U;
long long int var_16 = -6964585718585623167LL;
unsigned short var_17 = (unsigned short)44409;
void init() {
}

void checksum() {
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
