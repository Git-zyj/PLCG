#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4249955321U;
unsigned long long int var_6 = 9392995767254498333ULL;
unsigned char var_7 = (unsigned char)90;
signed char var_11 = (signed char)96;
signed char var_15 = (signed char)-7;
short var_18 = (short)-28095;
int zero = 0;
long long int var_19 = -195154446822870887LL;
short var_20 = (short)-14274;
unsigned long long int var_21 = 7070157931704999458ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
