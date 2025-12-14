#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28254;
unsigned long long int var_5 = 17722484087804551660ULL;
signed char var_9 = (signed char)-3;
signed char var_11 = (signed char)91;
unsigned char var_13 = (unsigned char)165;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3228793552U;
unsigned int var_20 = 2208300026U;
unsigned char var_21 = (unsigned char)26;
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
