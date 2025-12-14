#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-5;
_Bool var_3 = (_Bool)1;
unsigned short var_8 = (unsigned short)53022;
unsigned long long int var_9 = 17073580553664959409ULL;
unsigned long long int var_11 = 3076643152518244069ULL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)12;
short var_18 = (short)-22133;
unsigned char var_19 = (unsigned char)129;
int zero = 0;
signed char var_20 = (signed char)58;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)185;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)67;
void init() {
}

void checksum() {
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
