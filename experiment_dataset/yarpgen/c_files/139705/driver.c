#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 295410331U;
_Bool var_1 = (_Bool)1;
int var_2 = 395092151;
unsigned short var_3 = (unsigned short)23639;
unsigned int var_4 = 930143341U;
unsigned int var_5 = 2000739956U;
_Bool var_6 = (_Bool)1;
short var_7 = (short)16752;
long long int var_8 = -1762560717128309968LL;
unsigned char var_9 = (unsigned char)243;
long long int var_10 = 7056085121593036966LL;
long long int var_11 = -7739890031513456436LL;
unsigned int var_12 = 2346510445U;
unsigned long long int var_13 = 16375831131184250867ULL;
int zero = 0;
short var_14 = (short)32137;
long long int var_15 = 8636344677252390236LL;
int var_16 = -1226978036;
unsigned short var_17 = (unsigned short)61119;
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
