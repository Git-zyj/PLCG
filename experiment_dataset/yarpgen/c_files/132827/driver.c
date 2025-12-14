#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14363737812654954759ULL;
short var_1 = (short)-25492;
unsigned char var_2 = (unsigned char)188;
signed char var_5 = (signed char)-14;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_10 = (short)-32745;
short var_11 = (short)17452;
short var_12 = (short)-20976;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
