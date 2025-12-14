#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-122;
short var_4 = (short)408;
unsigned int var_6 = 4007195632U;
signed char var_17 = (signed char)105;
unsigned int var_19 = 644137144U;
int zero = 0;
unsigned short var_20 = (unsigned short)52197;
unsigned short var_21 = (unsigned short)51384;
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
