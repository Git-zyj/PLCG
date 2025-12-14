#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31165;
signed char var_3 = (signed char)43;
unsigned short var_5 = (unsigned short)1165;
unsigned long long int var_10 = 1569518034572262285ULL;
int zero = 0;
unsigned int var_14 = 1841884767U;
signed char var_15 = (signed char)-38;
void init() {
}

void checksum() {
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
