#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1108045034;
signed char var_6 = (signed char)-1;
unsigned short var_9 = (unsigned short)37368;
signed char var_13 = (signed char)-18;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_19 = (short)-17531;
short var_20 = (short)-22628;
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
