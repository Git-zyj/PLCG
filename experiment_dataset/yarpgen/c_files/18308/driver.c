#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-91;
unsigned short var_5 = (unsigned short)49673;
unsigned long long int var_7 = 6929509627058973078ULL;
unsigned long long int var_9 = 15327534100359579487ULL;
unsigned int var_17 = 1959992505U;
int zero = 0;
unsigned short var_20 = (unsigned short)25909;
short var_21 = (short)-31699;
unsigned int var_22 = 695487525U;
void init() {
}

void checksum() {
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
