#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1619418474U;
unsigned long long int var_3 = 4858917745732227711ULL;
unsigned long long int var_4 = 17244522264533501659ULL;
unsigned long long int var_5 = 328229724629600105ULL;
unsigned short var_10 = (unsigned short)64802;
int var_12 = -961013069;
unsigned short var_15 = (unsigned short)26546;
short var_17 = (short)32518;
int zero = 0;
unsigned char var_19 = (unsigned char)37;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 5388030666889880754ULL;
unsigned char var_22 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
