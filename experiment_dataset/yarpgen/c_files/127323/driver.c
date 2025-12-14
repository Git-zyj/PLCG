#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 124158051;
unsigned short var_2 = (unsigned short)9322;
int var_7 = -1114383496;
short var_11 = (short)-23845;
unsigned long long int var_12 = 1927029949217632942ULL;
_Bool var_13 = (_Bool)1;
int var_16 = 1245206585;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-51;
unsigned int var_20 = 1648696870U;
unsigned char var_21 = (unsigned char)107;
void init() {
}

void checksum() {
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
