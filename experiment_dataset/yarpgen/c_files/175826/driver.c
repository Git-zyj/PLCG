#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5034856769402961749LL;
int var_2 = 2118601461;
int var_3 = 275227354;
short var_4 = (short)-31986;
int var_8 = 1390943990;
short var_9 = (short)27904;
long long int var_10 = -5485403052944281064LL;
int var_11 = -25747446;
int zero = 0;
short var_12 = (short)-22866;
unsigned short var_13 = (unsigned short)48988;
long long int var_14 = 645292222762066896LL;
unsigned short var_15 = (unsigned short)61923;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
