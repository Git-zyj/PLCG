#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)135;
short var_5 = (short)15450;
signed char var_6 = (signed char)85;
int var_7 = -1315350555;
signed char var_10 = (signed char)46;
int zero = 0;
unsigned int var_12 = 2336229858U;
long long int var_13 = 4521515151212654934LL;
unsigned int var_14 = 321556331U;
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
