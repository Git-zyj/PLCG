#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12740;
short var_2 = (short)-26106;
signed char var_3 = (signed char)116;
unsigned short var_6 = (unsigned short)9633;
signed char var_8 = (signed char)13;
signed char var_12 = (signed char)-98;
int zero = 0;
unsigned long long int var_14 = 18156320365676871301ULL;
unsigned short var_15 = (unsigned short)46195;
unsigned long long int var_16 = 15292406655518720539ULL;
unsigned int var_17 = 1783165162U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
