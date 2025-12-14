#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26531;
unsigned short var_3 = (unsigned short)14437;
unsigned short var_12 = (unsigned short)37000;
short var_17 = (short)-27155;
int zero = 0;
unsigned short var_19 = (unsigned short)24971;
unsigned int var_20 = 703557357U;
int var_21 = -1531398309;
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
