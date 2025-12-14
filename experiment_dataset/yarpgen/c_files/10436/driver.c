#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)57;
unsigned short var_3 = (unsigned short)41237;
unsigned short var_4 = (unsigned short)9243;
signed char var_5 = (signed char)-17;
unsigned long long int var_8 = 215696569054730557ULL;
short var_15 = (short)19052;
short var_16 = (short)-32376;
unsigned long long int var_18 = 13367476304166612821ULL;
int zero = 0;
long long int var_20 = 5406735791340872974LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 764110334U;
unsigned char var_23 = (unsigned char)102;
unsigned long long int var_24 = 8892831435378884446ULL;
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
