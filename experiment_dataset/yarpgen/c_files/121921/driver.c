#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)21;
signed char var_3 = (signed char)-96;
unsigned long long int var_6 = 10118127833575211065ULL;
unsigned char var_9 = (unsigned char)116;
int zero = 0;
int var_10 = 1157282523;
short var_11 = (short)-32501;
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
