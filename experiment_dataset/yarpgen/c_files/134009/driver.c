#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
int var_4 = 360886426;
unsigned char var_6 = (unsigned char)209;
unsigned int var_7 = 2363716901U;
unsigned int var_11 = 554288108U;
int zero = 0;
signed char var_13 = (signed char)8;
unsigned int var_14 = 2277155926U;
int var_15 = 15147200;
short var_16 = (short)19065;
long long int var_17 = 7679454009680004305LL;
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
