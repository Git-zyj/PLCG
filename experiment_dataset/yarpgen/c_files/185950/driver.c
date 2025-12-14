#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3959031334U;
unsigned int var_2 = 2101895079U;
signed char var_4 = (signed char)-23;
int var_6 = -1656249608;
unsigned int var_7 = 3329602436U;
unsigned long long int var_8 = 6381278316030404960ULL;
unsigned long long int var_9 = 1559146246339285397ULL;
short var_11 = (short)-11462;
unsigned short var_12 = (unsigned short)39262;
int zero = 0;
long long int var_13 = -4577223477169207000LL;
unsigned short var_14 = (unsigned short)65002;
unsigned long long int var_15 = 13567994492936917592ULL;
void init() {
}

void checksum() {
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
