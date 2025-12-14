#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)41;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3411800777U;
long long int var_5 = -3937070602819404568LL;
signed char var_6 = (signed char)77;
unsigned long long int var_7 = 10747587583321753826ULL;
unsigned char var_8 = (unsigned char)146;
int var_9 = -1680523533;
short var_11 = (short)30861;
int var_12 = 411041346;
unsigned char var_17 = (unsigned char)209;
int zero = 0;
signed char var_18 = (signed char)58;
signed char var_19 = (signed char)-37;
void init() {
}

void checksum() {
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
