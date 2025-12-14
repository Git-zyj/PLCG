#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
long long int var_10 = 9079878049230604814LL;
int var_12 = 457519261;
long long int var_14 = 5003575046176603800LL;
unsigned short var_15 = (unsigned short)42232;
short var_18 = (short)-30645;
int var_19 = -803584127;
int zero = 0;
long long int var_20 = -3230991960073090373LL;
unsigned short var_21 = (unsigned short)62060;
long long int var_22 = 153596015275361361LL;
unsigned short var_23 = (unsigned short)61193;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
