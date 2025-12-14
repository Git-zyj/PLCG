#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1119264419U;
unsigned int var_4 = 1598700797U;
unsigned long long int var_5 = 16255895572336307470ULL;
unsigned long long int var_6 = 381033463068674684ULL;
unsigned char var_7 = (unsigned char)252;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)20361;
short var_10 = (short)2663;
signed char var_11 = (signed char)124;
int zero = 0;
unsigned short var_13 = (unsigned short)49571;
unsigned char var_14 = (unsigned char)106;
unsigned char var_15 = (unsigned char)219;
unsigned int var_16 = 2848307965U;
unsigned short var_17 = (unsigned short)49359;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
