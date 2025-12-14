#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1787883890;
int var_6 = 1191524858;
int zero = 0;
short var_11 = (short)24357;
int var_12 = 1084667677;
unsigned char var_13 = (unsigned char)164;
unsigned short var_14 = (unsigned short)22078;
signed char var_15 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
