#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10973;
short var_8 = (short)-20760;
signed char var_9 = (signed char)-126;
unsigned char var_12 = (unsigned char)168;
short var_13 = (short)-850;
short var_14 = (short)-101;
int zero = 0;
unsigned short var_15 = (unsigned short)55389;
unsigned int var_16 = 3724606322U;
unsigned long long int var_17 = 3361349679849907731ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
