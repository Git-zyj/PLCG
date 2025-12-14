#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4896;
unsigned int var_5 = 1574233230U;
signed char var_12 = (signed char)-30;
signed char var_13 = (signed char)111;
signed char var_17 = (signed char)61;
unsigned char var_18 = (unsigned char)175;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 1457929194086514865ULL;
signed char var_22 = (signed char)-13;
unsigned int var_23 = 1910977738U;
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
