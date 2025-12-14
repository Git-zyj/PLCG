#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3589396479U;
unsigned int var_1 = 1336327895U;
short var_2 = (short)16237;
short var_3 = (short)19015;
short var_6 = (short)16980;
unsigned int var_9 = 1674907955U;
short var_10 = (short)-9231;
unsigned int var_11 = 1354455102U;
short var_12 = (short)11612;
short var_13 = (short)15077;
short var_14 = (short)22411;
int zero = 0;
short var_17 = (short)31516;
short var_18 = (short)10042;
unsigned int var_19 = 2473934096U;
unsigned int var_20 = 794169670U;
unsigned int var_21 = 3662188213U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
