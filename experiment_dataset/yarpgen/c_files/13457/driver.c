#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19390;
signed char var_2 = (signed char)31;
unsigned long long int var_4 = 1572892266141954225ULL;
long long int var_5 = -6943621956247355383LL;
unsigned short var_6 = (unsigned short)60156;
unsigned short var_7 = (unsigned short)19347;
signed char var_11 = (signed char)-80;
int zero = 0;
unsigned long long int var_13 = 16511812999725923060ULL;
unsigned char var_14 = (unsigned char)24;
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
