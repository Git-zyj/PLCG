#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2028544029;
unsigned short var_8 = (unsigned short)49110;
unsigned char var_9 = (unsigned char)100;
int zero = 0;
unsigned char var_20 = (unsigned char)34;
short var_21 = (short)-26620;
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
