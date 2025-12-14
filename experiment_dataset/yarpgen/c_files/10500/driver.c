#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 851953900;
unsigned long long int var_4 = 12157444947801814675ULL;
short var_6 = (short)5610;
unsigned char var_7 = (unsigned char)231;
short var_8 = (short)-23517;
int zero = 0;
signed char var_10 = (signed char)65;
signed char var_11 = (signed char)68;
short var_12 = (short)4228;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
