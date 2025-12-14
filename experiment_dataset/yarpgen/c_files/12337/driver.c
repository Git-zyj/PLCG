#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28020;
signed char var_5 = (signed char)-39;
short var_6 = (short)6471;
unsigned long long int var_7 = 17317276847147482099ULL;
unsigned long long int var_8 = 5173977968849005602ULL;
signed char var_9 = (signed char)106;
int zero = 0;
unsigned long long int var_11 = 18441936509849208774ULL;
unsigned long long int var_12 = 5977098428660433657ULL;
signed char var_13 = (signed char)-103;
unsigned long long int var_14 = 4155766596399315291ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
