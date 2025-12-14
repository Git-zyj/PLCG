#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1200334124;
unsigned char var_4 = (unsigned char)162;
unsigned int var_7 = 1707634447U;
unsigned long long int var_8 = 2798601641796891818ULL;
int var_12 = 673141314;
signed char var_13 = (signed char)-102;
int zero = 0;
short var_17 = (short)-15382;
unsigned int var_18 = 2384429259U;
short var_19 = (short)-1267;
unsigned short var_20 = (unsigned short)37905;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
