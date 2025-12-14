#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65324;
short var_3 = (short)6886;
unsigned int var_4 = 3586104914U;
long long int var_8 = -1394464037860213904LL;
int zero = 0;
signed char var_12 = (signed char)88;
unsigned int var_13 = 551116424U;
unsigned short var_14 = (unsigned short)5578;
signed char var_15 = (signed char)4;
signed char var_16 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
