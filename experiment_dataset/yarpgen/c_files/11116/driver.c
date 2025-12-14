#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5359;
short var_6 = (short)-3563;
short var_7 = (short)10924;
int var_16 = 527909036;
int zero = 0;
unsigned long long int var_19 = 5794803768145787749ULL;
signed char var_20 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
