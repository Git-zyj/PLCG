#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4022406327U;
unsigned int var_1 = 4086227938U;
int var_3 = 1971290151;
short var_7 = (short)-15369;
int var_8 = -1518773739;
unsigned char var_10 = (unsigned char)130;
int var_11 = -1076877728;
unsigned int var_12 = 4194137701U;
unsigned int var_13 = 73626787U;
int zero = 0;
int var_16 = 319654110;
short var_17 = (short)13039;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
