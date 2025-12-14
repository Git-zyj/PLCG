#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 561446875;
short var_2 = (short)6695;
signed char var_4 = (signed char)14;
unsigned short var_5 = (unsigned short)53695;
unsigned short var_6 = (unsigned short)61689;
unsigned long long int var_7 = 13119801038965593335ULL;
unsigned long long int var_9 = 15359432964841236901ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)58;
unsigned int var_11 = 2453548076U;
unsigned int var_12 = 3524225830U;
long long int var_13 = 6430804500145286640LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
