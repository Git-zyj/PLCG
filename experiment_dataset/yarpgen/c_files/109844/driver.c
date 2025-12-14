#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
unsigned char var_3 = (unsigned char)154;
short var_5 = (short)12923;
unsigned short var_8 = (unsigned short)59553;
long long int var_11 = -1785856560848326479LL;
long long int var_12 = 7955271223985753029LL;
signed char var_13 = (signed char)-79;
int zero = 0;
unsigned long long int var_14 = 12756435465065839624ULL;
long long int var_15 = 8445626026142856667LL;
short var_16 = (short)-10501;
void init() {
}

void checksum() {
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
