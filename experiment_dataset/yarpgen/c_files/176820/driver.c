#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
unsigned char var_3 = (unsigned char)0;
unsigned char var_4 = (unsigned char)209;
unsigned int var_5 = 1879606235U;
unsigned char var_6 = (unsigned char)107;
unsigned int var_8 = 134234744U;
short var_9 = (short)26564;
int zero = 0;
unsigned long long int var_10 = 8474793074256279158ULL;
unsigned char var_11 = (unsigned char)92;
short var_12 = (short)-10901;
long long int var_13 = -5862824746951027313LL;
signed char var_14 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
