#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-23711;
signed char var_4 = (signed char)-82;
unsigned char var_6 = (unsigned char)205;
int var_9 = 906955933;
int zero = 0;
unsigned char var_10 = (unsigned char)208;
short var_11 = (short)3618;
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
