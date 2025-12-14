#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4532776250482875855ULL;
signed char var_1 = (signed char)-87;
signed char var_2 = (signed char)46;
unsigned int var_4 = 1288612555U;
signed char var_6 = (signed char)16;
signed char var_7 = (signed char)126;
short var_9 = (short)10343;
unsigned long long int var_11 = 8785617005795817514ULL;
int zero = 0;
int var_12 = 1921248329;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3467576732U;
int var_15 = -1631644857;
unsigned char var_16 = (unsigned char)12;
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
