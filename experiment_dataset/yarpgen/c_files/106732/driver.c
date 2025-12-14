#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28104;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)10;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)45;
short var_8 = (short)21738;
unsigned int var_11 = 109617754U;
signed char var_12 = (signed char)79;
signed char var_15 = (signed char)-26;
int zero = 0;
int var_16 = -940045178;
unsigned long long int var_17 = 370830381219862388ULL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
