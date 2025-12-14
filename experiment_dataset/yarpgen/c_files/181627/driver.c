#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6394;
unsigned long long int var_2 = 15866430778065857036ULL;
unsigned long long int var_7 = 6446481063060489693ULL;
unsigned long long int var_8 = 9275994418292556830ULL;
short var_9 = (short)30704;
int zero = 0;
int var_12 = -551736995;
short var_13 = (short)-21123;
int var_14 = 557926484;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
