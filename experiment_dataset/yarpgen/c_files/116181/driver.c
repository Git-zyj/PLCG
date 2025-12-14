#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14828;
unsigned char var_1 = (unsigned char)62;
signed char var_2 = (signed char)41;
int var_6 = 847668319;
unsigned char var_13 = (unsigned char)170;
unsigned short var_17 = (unsigned short)56132;
signed char var_19 = (signed char)10;
int zero = 0;
long long int var_20 = -3838664419565721848LL;
signed char var_21 = (signed char)32;
short var_22 = (short)18687;
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
