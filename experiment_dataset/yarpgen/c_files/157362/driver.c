#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26827;
unsigned short var_3 = (unsigned short)35384;
signed char var_5 = (signed char)89;
short var_8 = (short)-20930;
short var_11 = (short)-28214;
short var_12 = (short)-4864;
short var_13 = (short)4866;
int zero = 0;
short var_14 = (short)8730;
unsigned short var_15 = (unsigned short)12815;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
