#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)57226;
long long int var_2 = -8532924046367290211LL;
unsigned int var_4 = 3770355735U;
unsigned char var_5 = (unsigned char)32;
int var_6 = 302355568;
signed char var_9 = (signed char)-93;
unsigned short var_10 = (unsigned short)13612;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-48;
unsigned short var_16 = (unsigned short)8638;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2941249228U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
