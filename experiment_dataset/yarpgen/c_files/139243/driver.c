#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 580472167;
unsigned int var_3 = 2491080933U;
int var_5 = -2011329366;
signed char var_6 = (signed char)17;
signed char var_7 = (signed char)23;
unsigned char var_9 = (unsigned char)243;
unsigned int var_10 = 1234344074U;
unsigned int var_11 = 2903013910U;
int zero = 0;
short var_16 = (short)-2035;
unsigned short var_17 = (unsigned short)13002;
signed char var_18 = (signed char)59;
signed char var_19 = (signed char)49;
unsigned int var_20 = 383720348U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
