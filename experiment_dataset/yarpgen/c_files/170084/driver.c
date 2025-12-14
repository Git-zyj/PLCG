#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2002687713U;
unsigned int var_12 = 3141451546U;
signed char var_16 = (signed char)-120;
int zero = 0;
long long int var_17 = -7500397068302022705LL;
signed char var_18 = (signed char)-42;
unsigned short var_19 = (unsigned short)11755;
signed char var_20 = (signed char)-49;
void init() {
}

void checksum() {
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
