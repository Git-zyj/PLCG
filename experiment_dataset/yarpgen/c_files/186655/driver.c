#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 711411118U;
short var_10 = (short)-15730;
unsigned short var_12 = (unsigned short)62704;
signed char var_14 = (signed char)-70;
int zero = 0;
unsigned char var_18 = (unsigned char)126;
unsigned int var_19 = 2754062176U;
unsigned char var_20 = (unsigned char)209;
unsigned int var_21 = 866645353U;
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
