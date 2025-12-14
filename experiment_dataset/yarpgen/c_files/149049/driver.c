#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
unsigned long long int var_2 = 8637127514685239761ULL;
short var_5 = (short)-20964;
unsigned char var_8 = (unsigned char)158;
signed char var_11 = (signed char)-50;
signed char var_13 = (signed char)-72;
signed char var_15 = (signed char)-122;
int zero = 0;
int var_17 = 989532111;
long long int var_18 = -3794450777088259567LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
