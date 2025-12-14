#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
unsigned char var_2 = (unsigned char)12;
short var_3 = (short)-25525;
short var_5 = (short)-18602;
unsigned int var_7 = 150725050U;
int var_12 = 556707760;
int var_13 = 900700573;
int zero = 0;
long long int var_15 = 7360173454050052179LL;
unsigned long long int var_16 = 4831520973466931430ULL;
short var_17 = (short)-15855;
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
