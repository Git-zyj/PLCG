#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9115112844065176382LL;
signed char var_2 = (signed char)-82;
long long int var_4 = 3973683498468795313LL;
unsigned short var_9 = (unsigned short)49089;
long long int var_12 = 2912529476384129515LL;
unsigned short var_14 = (unsigned short)15702;
unsigned int var_16 = 3426634646U;
long long int var_17 = -1589368710759473571LL;
int zero = 0;
signed char var_18 = (signed char)-13;
unsigned char var_19 = (unsigned char)24;
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
