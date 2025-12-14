#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9304;
unsigned char var_2 = (unsigned char)19;
int var_9 = 1439894461;
short var_11 = (short)-7492;
signed char var_12 = (signed char)-24;
unsigned char var_13 = (unsigned char)107;
long long int var_15 = 2467394883422650563LL;
int zero = 0;
unsigned int var_17 = 821551736U;
short var_18 = (short)26182;
short var_19 = (short)27563;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
