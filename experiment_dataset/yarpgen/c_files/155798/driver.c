#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
long long int var_1 = 5424231460820414748LL;
unsigned short var_4 = (unsigned short)48714;
unsigned char var_9 = (unsigned char)35;
unsigned char var_10 = (unsigned char)147;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)200;
int zero = 0;
int var_16 = -1069900667;
unsigned int var_17 = 2710557233U;
unsigned int var_18 = 2408261238U;
unsigned char var_19 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
