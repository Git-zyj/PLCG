#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)17746;
unsigned char var_6 = (unsigned char)127;
signed char var_8 = (signed char)-75;
unsigned char var_10 = (unsigned char)148;
int zero = 0;
short var_12 = (short)-26797;
short var_13 = (short)25771;
void init() {
}

void checksum() {
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
