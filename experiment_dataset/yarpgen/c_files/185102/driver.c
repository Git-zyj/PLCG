#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9241;
signed char var_1 = (signed char)-125;
signed char var_9 = (signed char)48;
short var_11 = (short)-3437;
unsigned long long int var_12 = 15079317405915461693ULL;
int zero = 0;
signed char var_14 = (signed char)2;
short var_15 = (short)-6343;
signed char var_16 = (signed char)-106;
signed char var_17 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
