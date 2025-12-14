#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6804974608029888795LL;
unsigned short var_6 = (unsigned short)43482;
unsigned short var_7 = (unsigned short)12382;
int zero = 0;
signed char var_10 = (signed char)-106;
unsigned int var_11 = 2672474930U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
