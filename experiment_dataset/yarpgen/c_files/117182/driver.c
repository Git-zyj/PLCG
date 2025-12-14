#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23722;
short var_2 = (short)-23110;
unsigned long long int var_3 = 2797825626076200732ULL;
unsigned char var_4 = (unsigned char)175;
unsigned short var_5 = (unsigned short)48713;
unsigned short var_6 = (unsigned short)63989;
signed char var_7 = (signed char)-64;
short var_8 = (short)-14825;
long long int var_9 = 938301894046568947LL;
signed char var_12 = (signed char)56;
int zero = 0;
short var_13 = (short)-11032;
signed char var_14 = (signed char)-72;
unsigned long long int var_15 = 18252210349325868899ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
