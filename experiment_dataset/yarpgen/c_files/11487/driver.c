#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7534457998737829146LL;
unsigned int var_4 = 3484101498U;
short var_5 = (short)16402;
unsigned int var_6 = 1702072493U;
signed char var_7 = (signed char)109;
signed char var_8 = (signed char)-28;
unsigned int var_9 = 999676862U;
unsigned long long int var_10 = 9117232558423170401ULL;
int zero = 0;
short var_12 = (short)-7703;
short var_13 = (short)16638;
unsigned int var_14 = 80811040U;
short var_15 = (short)11036;
unsigned char var_16 = (unsigned char)229;
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
