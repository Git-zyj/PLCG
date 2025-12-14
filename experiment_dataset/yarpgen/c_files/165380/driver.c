#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-55;
unsigned short var_2 = (unsigned short)24378;
unsigned char var_4 = (unsigned char)171;
unsigned char var_6 = (unsigned char)55;
unsigned char var_8 = (unsigned char)245;
unsigned char var_9 = (unsigned char)84;
unsigned int var_12 = 806456189U;
unsigned int var_14 = 2418408960U;
int zero = 0;
short var_16 = (short)7845;
unsigned int var_17 = 2261731642U;
unsigned int var_18 = 1070092915U;
signed char var_19 = (signed char)-72;
signed char var_20 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
