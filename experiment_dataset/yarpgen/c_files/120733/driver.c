#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)21337;
unsigned int var_13 = 606550384U;
unsigned long long int var_15 = 11203187456825619181ULL;
unsigned char var_16 = (unsigned char)99;
unsigned int var_17 = 3186183555U;
int zero = 0;
short var_20 = (short)22134;
signed char var_21 = (signed char)-70;
short var_22 = (short)-3615;
unsigned int var_23 = 1975001642U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
