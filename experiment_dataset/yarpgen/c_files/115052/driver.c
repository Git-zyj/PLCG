#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1652432876;
unsigned short var_3 = (unsigned short)34565;
int var_5 = 540106047;
signed char var_7 = (signed char)-103;
int zero = 0;
int var_10 = 40665376;
int var_11 = 1116783048;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
