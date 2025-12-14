#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -428119469;
short var_10 = (short)-21852;
int var_11 = 795480676;
int zero = 0;
unsigned long long int var_12 = 8439684769128046539ULL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)95;
unsigned long long int var_15 = 256844568236534012ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
