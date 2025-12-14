#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11835;
unsigned long long int var_4 = 7946985963237133710ULL;
long long int var_7 = 1965781148489746373LL;
unsigned char var_8 = (unsigned char)155;
unsigned int var_9 = 2221488583U;
int zero = 0;
long long int var_10 = 1559586875381522227LL;
short var_11 = (short)13210;
unsigned char var_12 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
