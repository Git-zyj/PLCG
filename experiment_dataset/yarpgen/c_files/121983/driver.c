#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4313277728062464923LL;
signed char var_3 = (signed char)-8;
short var_6 = (short)1465;
short var_7 = (short)-25824;
unsigned long long int var_9 = 15350481926013014162ULL;
long long int var_11 = 2128001225830896570LL;
int zero = 0;
short var_13 = (short)-21190;
signed char var_14 = (signed char)92;
signed char var_15 = (signed char)-125;
unsigned char var_16 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
