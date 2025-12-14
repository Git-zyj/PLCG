#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-30561;
unsigned char var_4 = (unsigned char)25;
unsigned char var_5 = (unsigned char)66;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)79;
signed char var_11 = (signed char)-120;
short var_12 = (short)-23715;
int zero = 0;
unsigned int var_15 = 1184319018U;
unsigned int var_16 = 2087825143U;
unsigned int var_17 = 966226993U;
unsigned char var_18 = (unsigned char)40;
unsigned char var_19 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
