#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1340207933U;
unsigned short var_2 = (unsigned short)1634;
unsigned short var_4 = (unsigned short)16372;
short var_5 = (short)-29331;
signed char var_7 = (signed char)-39;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-15420;
long long int var_14 = 369015610547295114LL;
unsigned int var_15 = 3998768327U;
int var_18 = 1107504669;
int zero = 0;
signed char var_19 = (signed char)-18;
short var_20 = (short)29866;
void init() {
}

void checksum() {
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
