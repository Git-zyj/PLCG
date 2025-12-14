#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26709;
short var_2 = (short)20878;
short var_3 = (short)27295;
short var_4 = (short)4587;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)32;
unsigned char var_8 = (unsigned char)129;
short var_9 = (short)-31321;
unsigned int var_10 = 214148632U;
int zero = 0;
short var_13 = (short)28195;
signed char var_14 = (signed char)118;
short var_15 = (short)-7545;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
