#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 892869424;
signed char var_2 = (signed char)-64;
unsigned int var_3 = 3721104798U;
unsigned short var_5 = (unsigned short)55635;
unsigned short var_6 = (unsigned short)60410;
short var_8 = (short)-26437;
unsigned short var_9 = (unsigned short)32688;
int zero = 0;
unsigned short var_12 = (unsigned short)39830;
int var_13 = 1087794538;
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
