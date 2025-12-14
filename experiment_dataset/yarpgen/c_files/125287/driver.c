#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)81;
unsigned int var_8 = 3141670073U;
unsigned long long int var_15 = 2480681932015072699ULL;
signed char var_16 = (signed char)-23;
int zero = 0;
int var_18 = 1062798138;
short var_19 = (short)-10185;
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
