#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2258189969354387841ULL;
unsigned short var_2 = (unsigned short)34045;
unsigned short var_5 = (unsigned short)54131;
short var_6 = (short)-12891;
short var_7 = (short)-17635;
unsigned short var_9 = (unsigned short)13413;
int zero = 0;
signed char var_12 = (signed char)72;
unsigned int var_13 = 3380682913U;
short var_14 = (short)-13753;
unsigned int var_15 = 1617568280U;
unsigned short var_16 = (unsigned short)27559;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
