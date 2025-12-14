#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12349321212341949335ULL;
unsigned char var_11 = (unsigned char)122;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 10162449938230920081ULL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 791891483174905146ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)21489;
void init() {
}

void checksum() {
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
