#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
short var_4 = (short)-22461;
unsigned char var_5 = (unsigned char)243;
int var_6 = -676115787;
int var_7 = -913590806;
short var_8 = (short)-9823;
unsigned char var_10 = (unsigned char)162;
int var_11 = -1241224060;
int zero = 0;
signed char var_12 = (signed char)-6;
short var_13 = (short)28084;
unsigned char var_14 = (unsigned char)228;
int var_15 = -1427415881;
short var_16 = (short)12157;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
