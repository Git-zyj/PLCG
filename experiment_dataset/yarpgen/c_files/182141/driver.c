#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2928503370U;
signed char var_8 = (signed char)-3;
unsigned char var_10 = (unsigned char)165;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)227;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = 7450268185022932600LL;
unsigned char var_18 = (unsigned char)38;
unsigned short var_19 = (unsigned short)37343;
long long int var_20 = 3543305500426462674LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
