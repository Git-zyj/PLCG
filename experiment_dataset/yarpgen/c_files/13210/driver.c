#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1468193039;
unsigned long long int var_1 = 1733710941171914340ULL;
unsigned char var_3 = (unsigned char)233;
unsigned long long int var_6 = 3063752896944335565ULL;
unsigned int var_10 = 422172883U;
int var_13 = -1874067569;
unsigned int var_16 = 146690856U;
unsigned char var_17 = (unsigned char)80;
int zero = 0;
signed char var_19 = (signed char)-97;
unsigned char var_20 = (unsigned char)166;
void init() {
}

void checksum() {
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
