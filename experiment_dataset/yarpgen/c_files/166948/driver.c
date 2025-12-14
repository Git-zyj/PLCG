#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26224;
long long int var_2 = 7832469849533919622LL;
unsigned int var_3 = 355558365U;
unsigned int var_4 = 3727600825U;
short var_8 = (short)-7419;
long long int var_10 = -7107668497723884178LL;
short var_11 = (short)-13541;
int zero = 0;
unsigned int var_12 = 2505309455U;
unsigned char var_13 = (unsigned char)74;
short var_14 = (short)-31707;
short var_15 = (short)-29063;
unsigned short var_16 = (unsigned short)63304;
unsigned long long int var_17 = 150821932647154771ULL;
unsigned long long int var_18 = 6079210598969015715ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
