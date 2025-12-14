#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13336;
short var_5 = (short)23680;
long long int var_7 = 4765821647899812354LL;
unsigned char var_9 = (unsigned char)249;
unsigned long long int var_10 = 8741624520656703625ULL;
signed char var_11 = (signed char)-108;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 808041919U;
int zero = 0;
unsigned long long int var_15 = 15274757123137250371ULL;
unsigned int var_16 = 59900149U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
