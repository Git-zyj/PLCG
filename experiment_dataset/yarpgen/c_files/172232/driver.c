#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8822;
unsigned int var_4 = 1279470218U;
unsigned long long int var_5 = 117406541617903721ULL;
unsigned char var_11 = (unsigned char)252;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 499010624829596847ULL;
unsigned long long int var_16 = 11415988466807053426ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -767710102;
signed char var_19 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
