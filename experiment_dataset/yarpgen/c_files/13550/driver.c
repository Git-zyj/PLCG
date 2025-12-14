#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 370614134;
unsigned int var_3 = 3376134359U;
unsigned short var_4 = (unsigned short)39167;
int var_5 = -492038041;
int var_6 = 101141719;
signed char var_7 = (signed char)-40;
int var_9 = 1995812157;
signed char var_10 = (signed char)49;
int zero = 0;
unsigned short var_11 = (unsigned short)48486;
unsigned short var_12 = (unsigned short)7861;
unsigned short var_13 = (unsigned short)27939;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
