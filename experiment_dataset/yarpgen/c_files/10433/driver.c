#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
signed char var_4 = (signed char)-70;
unsigned char var_5 = (unsigned char)248;
unsigned char var_10 = (unsigned char)219;
unsigned char var_11 = (unsigned char)149;
signed char var_12 = (signed char)22;
signed char var_16 = (signed char)113;
signed char var_18 = (signed char)71;
int zero = 0;
signed char var_19 = (signed char)-8;
signed char var_20 = (signed char)-105;
signed char var_21 = (signed char)-116;
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
