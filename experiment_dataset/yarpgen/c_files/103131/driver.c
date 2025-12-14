#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 271972970U;
int var_9 = -2046934387;
unsigned int var_10 = 1893501671U;
short var_13 = (short)-3948;
short var_14 = (short)-21935;
unsigned int var_15 = 1916711456U;
int zero = 0;
unsigned int var_19 = 2099966860U;
unsigned long long int var_20 = 14648289442039226924ULL;
signed char var_21 = (signed char)-16;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
