#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6034307048082563697ULL;
short var_9 = (short)-28555;
int zero = 0;
unsigned long long int var_12 = 7170182215485525625ULL;
unsigned short var_13 = (unsigned short)1286;
unsigned long long int var_14 = 4136617008401358770ULL;
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
