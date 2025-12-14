#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2750208663U;
signed char var_5 = (signed char)-79;
signed char var_11 = (signed char)-102;
unsigned char var_12 = (unsigned char)216;
short var_15 = (short)-15627;
long long int var_17 = -7555236657854134065LL;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
int var_19 = -1474293575;
unsigned short var_20 = (unsigned short)33338;
int var_21 = -1371251585;
unsigned short var_22 = (unsigned short)4977;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
