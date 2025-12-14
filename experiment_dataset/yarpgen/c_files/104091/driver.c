#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8899;
unsigned int var_1 = 813297028U;
long long int var_3 = 84135559098003685LL;
unsigned long long int var_4 = 11674298426097733671ULL;
unsigned long long int var_5 = 5196226968488027121ULL;
unsigned long long int var_6 = 3969919993998062276ULL;
unsigned long long int var_7 = 12251760967881847913ULL;
unsigned short var_10 = (unsigned short)33459;
unsigned int var_14 = 442668575U;
unsigned long long int var_16 = 9446327812839241646ULL;
int zero = 0;
unsigned int var_17 = 1832222048U;
short var_18 = (short)21489;
unsigned long long int var_19 = 4384692547756146391ULL;
unsigned long long int var_20 = 8968400783503085724ULL;
unsigned short var_21 = (unsigned short)59415;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
