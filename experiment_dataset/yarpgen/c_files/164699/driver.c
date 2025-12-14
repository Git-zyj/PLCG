#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15147271495713401816ULL;
int var_4 = -1856856429;
unsigned int var_6 = 1357710307U;
unsigned int var_8 = 2680675322U;
unsigned short var_9 = (unsigned short)43150;
int var_11 = -1357697963;
unsigned int var_12 = 10138602U;
int zero = 0;
unsigned char var_14 = (unsigned char)152;
unsigned short var_15 = (unsigned short)23238;
unsigned char var_16 = (unsigned char)196;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
