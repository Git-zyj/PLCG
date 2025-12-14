#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
unsigned short var_2 = (unsigned short)50684;
short var_3 = (short)27306;
unsigned short var_5 = (unsigned short)16489;
unsigned char var_7 = (unsigned char)230;
int var_9 = 561192038;
short var_13 = (short)-6270;
unsigned int var_15 = 2306448425U;
unsigned short var_17 = (unsigned short)41769;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)35;
void init() {
}

void checksum() {
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
