#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18265259898572526396ULL;
short var_4 = (short)19497;
signed char var_11 = (signed char)9;
unsigned char var_12 = (unsigned char)213;
unsigned char var_14 = (unsigned char)149;
int var_15 = 1082557511;
int zero = 0;
unsigned short var_16 = (unsigned short)23105;
long long int var_17 = -2597068276533790628LL;
unsigned int var_18 = 225807102U;
int var_19 = 1186808316;
short var_20 = (short)-14868;
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
