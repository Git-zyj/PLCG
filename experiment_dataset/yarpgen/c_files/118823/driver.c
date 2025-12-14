#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 249564617U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)19043;
_Bool var_8 = (_Bool)0;
int var_10 = -2112062597;
signed char var_11 = (signed char)-89;
unsigned short var_15 = (unsigned short)21509;
int zero = 0;
long long int var_20 = 1948909748339378708LL;
unsigned int var_21 = 3893255186U;
void init() {
}

void checksum() {
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
