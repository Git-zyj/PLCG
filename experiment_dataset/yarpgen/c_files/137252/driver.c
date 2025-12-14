#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 276870026;
unsigned char var_2 = (unsigned char)134;
short var_3 = (short)18200;
long long int var_5 = 1102672459923911169LL;
unsigned char var_6 = (unsigned char)139;
unsigned short var_8 = (unsigned short)30302;
unsigned long long int var_10 = 8888448484648530985ULL;
unsigned char var_11 = (unsigned char)205;
int zero = 0;
int var_12 = 427582343;
unsigned short var_13 = (unsigned short)55906;
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
