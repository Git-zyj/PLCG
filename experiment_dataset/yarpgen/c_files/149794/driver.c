#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1526155947;
int var_1 = -1972486648;
int var_2 = 2122442365;
signed char var_3 = (signed char)74;
long long int var_4 = 5131391323699396408LL;
signed char var_5 = (signed char)-26;
signed char var_6 = (signed char)37;
long long int var_7 = -2094956030076990962LL;
unsigned long long int var_9 = 1446833416007391663ULL;
unsigned short var_11 = (unsigned short)62211;
short var_12 = (short)-4603;
long long int var_13 = -3064173926877453133LL;
unsigned long long int var_15 = 14576815643131574992ULL;
signed char var_16 = (signed char)-123;
int var_18 = -2023917901;
int zero = 0;
unsigned long long int var_19 = 10267351315451790185ULL;
signed char var_20 = (signed char)41;
unsigned int var_21 = 1424224742U;
short var_22 = (short)3158;
short var_23 = (short)11750;
short var_24 = (short)14893;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
