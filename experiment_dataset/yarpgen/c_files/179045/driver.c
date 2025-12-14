#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23951;
short var_4 = (short)-22841;
short var_5 = (short)6806;
short var_6 = (short)-9225;
short var_8 = (short)21581;
short var_9 = (short)-24353;
short var_10 = (short)26589;
short var_11 = (short)-938;
int zero = 0;
short var_12 = (short)32640;
short var_13 = (short)30061;
short var_14 = (short)-11942;
short var_15 = (short)-27521;
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
