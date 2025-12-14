#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3622380131259881217LL;
unsigned short var_4 = (unsigned short)60290;
short var_6 = (short)-22640;
int var_8 = -595231974;
int var_11 = 836897718;
int zero = 0;
unsigned long long int var_12 = 9420135366032832381ULL;
signed char var_13 = (signed char)-116;
void init() {
}

void checksum() {
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
