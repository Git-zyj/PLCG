#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-75;
int var_1 = 1170866323;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3007255472U;
unsigned char var_6 = (unsigned char)119;
unsigned long long int var_8 = 7781393898383281364ULL;
short var_12 = (short)3553;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)60430;
unsigned char var_18 = (unsigned char)166;
int var_19 = 1441242580;
int var_20 = -1226925756;
void init() {
}

void checksum() {
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
