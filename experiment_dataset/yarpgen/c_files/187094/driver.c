#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50068;
unsigned long long int var_1 = 9921004525730190511ULL;
unsigned char var_5 = (unsigned char)27;
signed char var_8 = (signed char)115;
int var_9 = -2084985782;
unsigned short var_10 = (unsigned short)52761;
unsigned int var_11 = 3040378580U;
int zero = 0;
signed char var_13 = (signed char)-97;
unsigned char var_14 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
