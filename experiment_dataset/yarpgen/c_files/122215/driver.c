#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7597;
long long int var_3 = 4798591896146540369LL;
short var_4 = (short)22008;
unsigned long long int var_5 = 3461006042836675552ULL;
int var_6 = -791829704;
unsigned short var_7 = (unsigned short)52060;
unsigned int var_8 = 4230350405U;
unsigned short var_9 = (unsigned short)56938;
unsigned short var_10 = (unsigned short)39643;
short var_11 = (short)16545;
int zero = 0;
unsigned char var_12 = (unsigned char)233;
signed char var_13 = (signed char)-68;
short var_14 = (short)31943;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
