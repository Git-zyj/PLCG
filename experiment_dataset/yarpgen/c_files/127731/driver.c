#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-105;
unsigned char var_2 = (unsigned char)72;
long long int var_6 = -2448222841688344017LL;
int var_11 = 574146364;
unsigned char var_14 = (unsigned char)140;
int zero = 0;
short var_18 = (short)5766;
int var_19 = 1339680882;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
