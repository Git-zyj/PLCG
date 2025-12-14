#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25384;
unsigned long long int var_4 = 9431701351755381877ULL;
unsigned int var_6 = 587036350U;
int var_8 = 546070624;
unsigned short var_9 = (unsigned short)57324;
int var_10 = -1231044224;
int zero = 0;
unsigned char var_11 = (unsigned char)2;
short var_12 = (short)-28714;
short var_13 = (short)17419;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
