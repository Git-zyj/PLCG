#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-323;
signed char var_5 = (signed char)-96;
int var_6 = 1360339455;
unsigned char var_7 = (unsigned char)204;
signed char var_9 = (signed char)8;
long long int var_11 = 1467044004271774134LL;
signed char var_15 = (signed char)16;
int zero = 0;
unsigned char var_18 = (unsigned char)124;
signed char var_19 = (signed char)15;
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
