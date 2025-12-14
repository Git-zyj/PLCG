#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9189;
short var_4 = (short)1729;
unsigned short var_12 = (unsigned short)18809;
int zero = 0;
unsigned long long int var_18 = 3564630122065554667ULL;
unsigned long long int var_19 = 2161693553150760685ULL;
signed char var_20 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
