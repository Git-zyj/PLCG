#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)161;
unsigned short var_3 = (unsigned short)58778;
unsigned short var_6 = (unsigned short)16397;
short var_9 = (short)-9178;
int zero = 0;
signed char var_10 = (signed char)-13;
short var_11 = (short)31057;
int var_12 = 1122129002;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
