#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
unsigned long long int var_1 = 9286442921964417039ULL;
unsigned short var_3 = (unsigned short)40404;
short var_7 = (short)19238;
signed char var_8 = (signed char)123;
long long int var_9 = -7993272172734593489LL;
signed char var_12 = (signed char)24;
unsigned int var_13 = 372792785U;
signed char var_15 = (signed char)-68;
unsigned short var_17 = (unsigned short)27256;
int zero = 0;
int var_20 = 386763960;
signed char var_21 = (signed char)0;
unsigned short var_22 = (unsigned short)26599;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
