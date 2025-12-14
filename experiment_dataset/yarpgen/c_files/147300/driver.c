#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)97;
unsigned int var_7 = 1016541030U;
int var_11 = 733532380;
unsigned long long int var_13 = 10167745656048792147ULL;
unsigned int var_15 = 3619700610U;
short var_16 = (short)-26798;
int zero = 0;
unsigned short var_18 = (unsigned short)62946;
short var_19 = (short)-14826;
signed char var_20 = (signed char)-43;
void init() {
}

void checksum() {
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
