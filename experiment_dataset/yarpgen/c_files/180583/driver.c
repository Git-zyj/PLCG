#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)21824;
short var_7 = (short)24571;
unsigned short var_9 = (unsigned short)31565;
int var_12 = -1489977302;
int zero = 0;
unsigned char var_13 = (unsigned char)17;
signed char var_14 = (signed char)52;
void init() {
}

void checksum() {
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
