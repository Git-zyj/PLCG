#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5905510776774925495ULL;
unsigned char var_3 = (unsigned char)90;
unsigned int var_4 = 1681090545U;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-38;
unsigned int var_10 = 2822383466U;
signed char var_12 = (signed char)-88;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 1632334422;
short var_18 = (short)-5077;
void init() {
}

void checksum() {
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
