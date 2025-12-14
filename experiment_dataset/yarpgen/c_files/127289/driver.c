#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6876;
short var_1 = (short)4887;
short var_2 = (short)2071;
unsigned char var_3 = (unsigned char)117;
short var_4 = (short)30470;
short var_5 = (short)-2929;
short var_6 = (short)-18149;
short var_7 = (short)22681;
short var_8 = (short)-15874;
short var_9 = (short)-2302;
short var_10 = (short)22338;
unsigned char var_11 = (unsigned char)182;
short var_12 = (short)-15237;
int zero = 0;
unsigned char var_13 = (unsigned char)128;
short var_14 = (short)-23332;
short var_15 = (short)2897;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
