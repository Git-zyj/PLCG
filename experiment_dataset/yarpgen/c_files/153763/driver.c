#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)113;
short var_7 = (short)25139;
unsigned char var_10 = (unsigned char)2;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3037732669U;
unsigned long long int var_14 = 15256972753491028996ULL;
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
