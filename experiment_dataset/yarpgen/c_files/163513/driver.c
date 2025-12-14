#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26057;
unsigned long long int var_1 = 13839050984357368285ULL;
long long int var_7 = -5962733756126088411LL;
int zero = 0;
signed char var_10 = (signed char)-106;
unsigned short var_11 = (unsigned short)61713;
unsigned int var_12 = 912254131U;
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
