#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22850;
unsigned long long int var_1 = 611963123924444276ULL;
short var_4 = (short)14900;
signed char var_5 = (signed char)-119;
signed char var_7 = (signed char)70;
int var_9 = 1564413123;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)186;
unsigned short var_16 = (unsigned short)21652;
unsigned char var_17 = (unsigned char)81;
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
