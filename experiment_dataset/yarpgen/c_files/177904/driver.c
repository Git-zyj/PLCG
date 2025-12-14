#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1929325808;
unsigned short var_6 = (unsigned short)39388;
unsigned char var_9 = (unsigned char)126;
unsigned long long int var_11 = 3743963636172134180ULL;
_Bool var_13 = (_Bool)0;
long long int var_15 = -1034527840443256839LL;
unsigned short var_16 = (unsigned short)33856;
long long int var_18 = -2025959636385553661LL;
int zero = 0;
unsigned short var_20 = (unsigned short)7601;
int var_21 = -468662187;
long long int var_22 = -7463127164745812725LL;
short var_23 = (short)-24219;
int var_24 = -1495155173;
short var_25 = (short)8091;
int var_26 = -1249194624;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
