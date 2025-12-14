#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8504;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 1912505407U;
short var_7 = (short)9489;
int var_9 = -1075595306;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)14;
unsigned int var_13 = 486398341U;
int zero = 0;
unsigned char var_14 = (unsigned char)210;
unsigned int var_15 = 1726946066U;
short var_16 = (short)-284;
signed char var_17 = (signed char)40;
void init() {
}

void checksum() {
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
