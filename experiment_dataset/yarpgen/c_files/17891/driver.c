#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1807593261U;
short var_7 = (short)16970;
signed char var_9 = (signed char)-45;
int var_11 = 2004911633;
int var_12 = -122906998;
int zero = 0;
unsigned short var_13 = (unsigned short)16388;
unsigned long long int var_14 = 3965289036983553453ULL;
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
