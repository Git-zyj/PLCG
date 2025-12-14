#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41720;
signed char var_1 = (signed char)36;
short var_4 = (short)-23323;
unsigned short var_7 = (unsigned short)6682;
short var_8 = (short)5850;
int zero = 0;
signed char var_10 = (signed char)-54;
signed char var_11 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
