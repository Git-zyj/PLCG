#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26711;
long long int var_2 = 3445028916919311809LL;
int var_3 = 450764301;
unsigned long long int var_4 = 3370882423110072157ULL;
short var_6 = (short)30660;
int zero = 0;
long long int var_12 = -3674228213705257734LL;
unsigned long long int var_13 = 1590358076512568508ULL;
unsigned char var_14 = (unsigned char)146;
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
