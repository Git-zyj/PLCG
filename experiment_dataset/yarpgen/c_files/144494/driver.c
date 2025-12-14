#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23190;
short var_3 = (short)28619;
unsigned short var_4 = (unsigned short)29696;
unsigned short var_11 = (unsigned short)19323;
unsigned long long int var_13 = 5530596939831832095ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)9429;
unsigned short var_17 = (unsigned short)41521;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
