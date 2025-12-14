#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)46;
int var_6 = -1142039443;
signed char var_11 = (signed char)21;
unsigned char var_16 = (unsigned char)211;
signed char var_17 = (signed char)-88;
int zero = 0;
short var_20 = (short)-501;
signed char var_21 = (signed char)-102;
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
