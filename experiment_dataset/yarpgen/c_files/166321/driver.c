#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-21;
unsigned short var_4 = (unsigned short)2040;
unsigned char var_5 = (unsigned char)138;
signed char var_6 = (signed char)54;
int var_8 = 1160660011;
short var_10 = (short)-2268;
int zero = 0;
unsigned char var_13 = (unsigned char)61;
unsigned long long int var_14 = 5910253242911684648ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
