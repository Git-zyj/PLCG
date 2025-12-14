#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28586;
signed char var_2 = (signed char)21;
unsigned int var_5 = 489753693U;
signed char var_7 = (signed char)34;
unsigned long long int var_10 = 12821134267137468732ULL;
int zero = 0;
long long int var_12 = 4190196619599088580LL;
short var_13 = (short)-19387;
unsigned char var_14 = (unsigned char)185;
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
