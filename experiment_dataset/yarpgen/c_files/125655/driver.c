#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)100;
unsigned short var_2 = (unsigned short)20023;
short var_6 = (short)3522;
signed char var_11 = (signed char)126;
int zero = 0;
unsigned char var_19 = (unsigned char)156;
short var_20 = (short)-7879;
unsigned char var_21 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
