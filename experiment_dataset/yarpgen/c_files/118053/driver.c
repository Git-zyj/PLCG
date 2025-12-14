#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43463;
unsigned long long int var_2 = 5111096382312017908ULL;
int var_3 = 1104784411;
unsigned int var_5 = 3603724599U;
short var_9 = (short)-17178;
unsigned short var_12 = (unsigned short)38673;
int zero = 0;
short var_13 = (short)1743;
unsigned int var_14 = 1735547054U;
int var_15 = 1951840210;
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
