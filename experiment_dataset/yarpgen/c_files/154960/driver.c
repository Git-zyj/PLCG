#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 935457118;
signed char var_2 = (signed char)99;
unsigned int var_3 = 1520549186U;
int var_5 = -49678513;
unsigned char var_6 = (unsigned char)130;
unsigned int var_7 = 1730536388U;
unsigned long long int var_8 = 2093327607788086318ULL;
signed char var_9 = (signed char)-20;
unsigned int var_11 = 3577040009U;
int zero = 0;
signed char var_12 = (signed char)19;
unsigned char var_13 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
