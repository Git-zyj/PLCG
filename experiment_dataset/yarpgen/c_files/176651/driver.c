#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 430556974U;
long long int var_3 = 9036489183770834623LL;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)114;
unsigned int var_14 = 1533190446U;
int zero = 0;
short var_16 = (short)-7282;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)10219;
long long int var_19 = 3207105771841065735LL;
unsigned int var_20 = 1343009229U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
