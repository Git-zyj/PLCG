#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45183;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)158;
signed char var_6 = (signed char)64;
signed char var_7 = (signed char)-62;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-60;
long long int var_14 = 3873999769721720197LL;
unsigned char var_16 = (unsigned char)85;
signed char var_17 = (signed char)-100;
int var_18 = -351203267;
int zero = 0;
unsigned char var_20 = (unsigned char)135;
int var_21 = -678115054;
unsigned short var_22 = (unsigned short)46108;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
