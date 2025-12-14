#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 238007573324603916ULL;
int var_5 = -1355055732;
short var_6 = (short)-29780;
unsigned char var_9 = (unsigned char)94;
int zero = 0;
unsigned short var_11 = (unsigned short)42383;
unsigned char var_12 = (unsigned char)35;
void init() {
}

void checksum() {
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
