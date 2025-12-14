#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-92;
int var_11 = 392504400;
unsigned long long int var_13 = 2952820772265898808ULL;
int zero = 0;
unsigned int var_16 = 2804940094U;
short var_17 = (short)2955;
unsigned char var_18 = (unsigned char)212;
int var_19 = -399451927;
signed char var_20 = (signed char)11;
unsigned long long int var_21 = 6534915584595156769ULL;
unsigned char var_22 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
