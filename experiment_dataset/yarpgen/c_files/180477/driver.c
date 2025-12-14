#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
long long int var_1 = -5363142609179785445LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)61402;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 4179711541U;
unsigned int var_6 = 978729987U;
short var_8 = (short)11812;
unsigned long long int var_9 = 4600860664025690973ULL;
unsigned short var_10 = (unsigned short)56261;
int zero = 0;
short var_11 = (short)15463;
unsigned long long int var_12 = 3224660348975626250ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
