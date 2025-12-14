#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1254739924;
unsigned int var_2 = 1865104906U;
unsigned int var_5 = 1471252056U;
long long int var_6 = 7567843074889114521LL;
long long int var_7 = 3886770237809050101LL;
unsigned long long int var_10 = 12404778390224749873ULL;
int zero = 0;
unsigned int var_11 = 2362581284U;
unsigned short var_12 = (unsigned short)43927;
long long int var_13 = 6754823885209581634LL;
short var_14 = (short)-2602;
unsigned short var_15 = (unsigned short)31762;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
