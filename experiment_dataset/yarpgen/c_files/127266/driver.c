#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1559;
long long int var_3 = -6344078483393213167LL;
signed char var_6 = (signed char)1;
unsigned int var_7 = 912487157U;
short var_10 = (short)17164;
unsigned short var_11 = (unsigned short)23105;
signed char var_12 = (signed char)127;
int zero = 0;
long long int var_13 = -2809180958165262854LL;
unsigned int var_14 = 2121023770U;
short var_15 = (short)-6954;
unsigned int var_16 = 4056295439U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
