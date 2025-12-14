#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2141534303U;
signed char var_5 = (signed char)-84;
signed char var_7 = (signed char)-1;
short var_9 = (short)10222;
long long int var_10 = -8575388451634727815LL;
signed char var_12 = (signed char)-42;
int zero = 0;
signed char var_13 = (signed char)87;
int var_14 = 1015137979;
long long int var_15 = -617626384030812984LL;
unsigned char var_16 = (unsigned char)117;
signed char var_17 = (signed char)35;
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
