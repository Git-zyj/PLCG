#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1785210149;
unsigned short var_1 = (unsigned short)22260;
unsigned long long int var_8 = 1127377069924167633ULL;
short var_9 = (short)-5507;
unsigned char var_11 = (unsigned char)141;
int zero = 0;
unsigned int var_12 = 618205609U;
unsigned int var_13 = 868878330U;
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
