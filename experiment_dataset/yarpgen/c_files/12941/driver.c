#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18203;
unsigned short var_6 = (unsigned short)65030;
int var_7 = -1263928672;
signed char var_9 = (signed char)104;
signed char var_11 = (signed char)45;
signed char var_14 = (signed char)(-127 - 1);
int zero = 0;
unsigned short var_18 = (unsigned short)58028;
short var_19 = (short)7152;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
