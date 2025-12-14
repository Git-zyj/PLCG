#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1993638024;
int var_2 = -1525210106;
signed char var_3 = (signed char)57;
int var_4 = 2144552682;
signed char var_7 = (signed char)104;
unsigned char var_8 = (unsigned char)206;
int zero = 0;
unsigned short var_10 = (unsigned short)14908;
unsigned char var_11 = (unsigned char)165;
signed char var_12 = (signed char)-114;
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
