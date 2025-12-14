#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20022;
unsigned short var_3 = (unsigned short)45413;
signed char var_4 = (signed char)66;
signed char var_10 = (signed char)19;
signed char var_11 = (signed char)7;
int zero = 0;
long long int var_13 = 1907717084445694980LL;
unsigned int var_14 = 1492265335U;
unsigned long long int var_15 = 13276610866594456006ULL;
short var_16 = (short)2093;
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
