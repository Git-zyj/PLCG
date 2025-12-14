#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27445;
long long int var_1 = 3197800600908373596LL;
short var_2 = (short)-16687;
unsigned short var_3 = (unsigned short)6166;
signed char var_6 = (signed char)17;
unsigned long long int var_7 = 11022416644158596197ULL;
int zero = 0;
unsigned long long int var_10 = 17459582440226389650ULL;
signed char var_11 = (signed char)-112;
signed char var_12 = (signed char)29;
short var_13 = (short)-1411;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
