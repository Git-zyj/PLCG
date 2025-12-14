#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 31489443754948881ULL;
signed char var_4 = (signed char)10;
unsigned char var_6 = (unsigned char)50;
signed char var_7 = (signed char)-42;
signed char var_8 = (signed char)-119;
unsigned int var_9 = 2739511089U;
short var_11 = (short)-28160;
int zero = 0;
unsigned short var_12 = (unsigned short)46024;
signed char var_13 = (signed char)-1;
unsigned int var_14 = 1646108957U;
signed char var_15 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
