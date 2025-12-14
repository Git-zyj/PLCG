#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)67;
unsigned long long int var_5 = 1958987094287615075ULL;
int var_6 = -576352865;
unsigned int var_7 = 476719468U;
signed char var_9 = (signed char)-125;
int zero = 0;
short var_17 = (short)-2500;
signed char var_18 = (signed char)-60;
unsigned long long int var_19 = 6301666295269476668ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
