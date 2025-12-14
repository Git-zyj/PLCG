#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55409;
signed char var_3 = (signed char)-35;
int var_4 = -1250185900;
unsigned short var_5 = (unsigned short)29988;
unsigned long long int var_10 = 893032170563459542ULL;
int var_16 = -76754464;
int zero = 0;
short var_17 = (short)-19860;
long long int var_18 = -2907955686714412352LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
