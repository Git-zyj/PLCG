#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4763061610454593864LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 3511699190428739968ULL;
int var_9 = 1787447716;
unsigned short var_14 = (unsigned short)24396;
signed char var_16 = (signed char)78;
long long int var_17 = -4895301587274464584LL;
int zero = 0;
unsigned short var_19 = (unsigned short)37064;
unsigned long long int var_20 = 6723750515108580677ULL;
unsigned char var_21 = (unsigned char)237;
void init() {
}

void checksum() {
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
