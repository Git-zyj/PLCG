#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4976006451625365975ULL;
unsigned char var_7 = (unsigned char)37;
int var_9 = 1578476386;
signed char var_13 = (signed char)25;
short var_17 = (short)-566;
signed char var_19 = (signed char)-115;
int zero = 0;
unsigned int var_20 = 3815710831U;
unsigned long long int var_21 = 13555854273819274095ULL;
unsigned short var_22 = (unsigned short)56020;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
