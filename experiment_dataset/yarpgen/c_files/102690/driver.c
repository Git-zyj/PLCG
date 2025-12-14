#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-29;
short var_3 = (short)-17632;
unsigned int var_6 = 3001510483U;
long long int var_9 = 1992809281850970365LL;
signed char var_10 = (signed char)-6;
unsigned long long int var_11 = 9468793697906224968ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)63496;
unsigned short var_15 = (unsigned short)3596;
int var_16 = 343424116;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
