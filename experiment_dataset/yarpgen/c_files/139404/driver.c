#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 14085300097841818998ULL;
unsigned char var_12 = (unsigned char)204;
_Bool var_13 = (_Bool)1;
short var_15 = (short)-19620;
int zero = 0;
short var_19 = (short)25942;
long long int var_20 = 251579655757884363LL;
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
