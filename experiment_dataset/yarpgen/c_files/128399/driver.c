#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)124;
unsigned long long int var_7 = 2690422711031507283ULL;
signed char var_8 = (signed char)-60;
unsigned char var_9 = (unsigned char)246;
unsigned int var_10 = 2426651190U;
int zero = 0;
short var_20 = (short)5247;
unsigned int var_21 = 1284752234U;
unsigned short var_22 = (unsigned short)65256;
unsigned long long int var_23 = 13718253237727714948ULL;
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
