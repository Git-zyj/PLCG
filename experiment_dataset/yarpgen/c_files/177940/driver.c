#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned long long int var_2 = 15818791599819701041ULL;
short var_4 = (short)17655;
unsigned int var_5 = 1130027394U;
unsigned int var_6 = 3623801550U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_17 = 48753369265373809ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-25443;
short var_20 = (short)-2073;
signed char var_21 = (signed char)112;
void init() {
}

void checksum() {
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
