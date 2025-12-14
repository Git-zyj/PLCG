#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21288;
unsigned long long int var_1 = 13711012491494697557ULL;
int var_3 = 2126518720;
unsigned long long int var_4 = 13751305316775984849ULL;
unsigned short var_7 = (unsigned short)42978;
int var_9 = -1974673802;
unsigned int var_13 = 1164279153U;
int zero = 0;
int var_14 = 1386465765;
short var_15 = (short)13413;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
