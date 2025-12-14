#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8823;
short var_7 = (short)24100;
signed char var_10 = (signed char)13;
unsigned char var_11 = (unsigned char)248;
int var_14 = 868387788;
unsigned char var_18 = (unsigned char)126;
int zero = 0;
unsigned short var_20 = (unsigned short)40767;
unsigned short var_21 = (unsigned short)2557;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
