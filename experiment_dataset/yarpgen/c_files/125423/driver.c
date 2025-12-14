#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1045895409;
unsigned long long int var_3 = 10025099245929032751ULL;
int var_5 = -194420529;
unsigned char var_8 = (unsigned char)162;
unsigned int var_11 = 4090695231U;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-8;
unsigned char var_15 = (unsigned char)159;
unsigned int var_16 = 2076185966U;
long long int var_18 = -5132432638489654190LL;
int zero = 0;
short var_20 = (short)-386;
short var_21 = (short)3009;
short var_22 = (short)-15754;
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
