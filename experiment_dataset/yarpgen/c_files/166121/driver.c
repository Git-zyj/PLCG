#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1899319501;
short var_3 = (short)2017;
short var_4 = (short)-28229;
signed char var_6 = (signed char)-58;
signed char var_9 = (signed char)54;
int zero = 0;
signed char var_10 = (signed char)14;
unsigned short var_11 = (unsigned short)14435;
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
