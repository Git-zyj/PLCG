#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8088093969969409251LL;
short var_1 = (short)26494;
int var_3 = 1702942747;
signed char var_4 = (signed char)-50;
int zero = 0;
unsigned char var_20 = (unsigned char)184;
short var_21 = (short)-23399;
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
