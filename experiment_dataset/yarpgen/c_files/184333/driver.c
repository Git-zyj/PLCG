#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33005;
signed char var_1 = (signed char)-18;
unsigned int var_3 = 1724832461U;
unsigned short var_5 = (unsigned short)26175;
short var_6 = (short)32738;
unsigned short var_8 = (unsigned short)57644;
unsigned short var_11 = (unsigned short)7536;
signed char var_12 = (signed char)-67;
unsigned int var_13 = 323424064U;
int zero = 0;
long long int var_15 = -150712362235051783LL;
unsigned short var_16 = (unsigned short)9089;
int var_17 = -547262005;
short var_18 = (short)22154;
void init() {
}

void checksum() {
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
