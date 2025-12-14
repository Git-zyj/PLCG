#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27197;
unsigned char var_5 = (unsigned char)49;
signed char var_6 = (signed char)-16;
unsigned short var_11 = (unsigned short)27754;
signed char var_14 = (signed char)-80;
int zero = 0;
short var_15 = (short)-19685;
unsigned long long int var_16 = 4775644776202736934ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
