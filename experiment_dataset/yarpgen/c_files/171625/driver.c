#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)238;
unsigned int var_3 = 2329640127U;
unsigned short var_5 = (unsigned short)28212;
short var_6 = (short)18867;
long long int var_10 = -5250187741026198780LL;
long long int var_16 = 7657055816167061977LL;
int zero = 0;
unsigned int var_19 = 722781892U;
unsigned int var_20 = 385116561U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
