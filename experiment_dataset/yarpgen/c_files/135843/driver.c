#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12383351747688864700ULL;
int var_2 = 763623336;
unsigned long long int var_4 = 13536764625927498306ULL;
unsigned long long int var_5 = 3042415958971108944ULL;
short var_9 = (short)15451;
unsigned int var_11 = 2698703748U;
unsigned long long int var_12 = 9912785654630271397ULL;
int var_15 = 535640837;
int zero = 0;
unsigned char var_16 = (unsigned char)141;
unsigned short var_17 = (unsigned short)61266;
void init() {
}

void checksum() {
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
