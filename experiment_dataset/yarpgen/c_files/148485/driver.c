#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24779;
unsigned short var_2 = (unsigned short)40903;
unsigned long long int var_8 = 6187522792369961294ULL;
int zero = 0;
short var_13 = (short)13302;
unsigned char var_14 = (unsigned char)182;
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
