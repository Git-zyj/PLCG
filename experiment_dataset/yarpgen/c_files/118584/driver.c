#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
short var_5 = (short)6781;
unsigned char var_6 = (unsigned char)7;
int var_7 = -675167197;
long long int var_8 = 8505164711847932826LL;
short var_10 = (short)30298;
short var_11 = (short)-27751;
unsigned short var_12 = (unsigned short)31017;
unsigned int var_13 = 2609583074U;
short var_15 = (short)-25939;
long long int var_16 = 7447075526523881766LL;
unsigned char var_17 = (unsigned char)185;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)106;
unsigned char var_22 = (unsigned char)176;
long long int var_23 = 1618571780308919486LL;
short var_24 = (short)-24438;
short var_25 = (short)30408;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
