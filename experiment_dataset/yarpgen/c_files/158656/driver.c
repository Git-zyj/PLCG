#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8071;
unsigned long long int var_5 = 3092405380800843168ULL;
unsigned int var_14 = 1202460490U;
int zero = 0;
unsigned long long int var_20 = 4170118936066777163ULL;
unsigned short var_21 = (unsigned short)25608;
signed char var_22 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
