#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-67;
long long int var_5 = -2680152846566697100LL;
int var_7 = 255836801;
signed char var_11 = (signed char)-105;
long long int var_12 = 3300173763069055090LL;
int zero = 0;
signed char var_13 = (signed char)28;
signed char var_14 = (signed char)-46;
unsigned short var_15 = (unsigned short)28341;
unsigned int var_16 = 4271068284U;
short var_17 = (short)12986;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
