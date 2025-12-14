#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)62;
signed char var_2 = (signed char)17;
short var_3 = (short)-11769;
unsigned short var_5 = (unsigned short)10334;
unsigned short var_8 = (unsigned short)39647;
int var_10 = 2082865862;
int zero = 0;
unsigned char var_11 = (unsigned char)45;
unsigned long long int var_12 = 11315429120935343342ULL;
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
