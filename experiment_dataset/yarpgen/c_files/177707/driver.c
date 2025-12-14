#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 899943129U;
int var_4 = 1584557138;
long long int var_5 = -4915328074807528752LL;
unsigned int var_7 = 971732427U;
unsigned char var_11 = (unsigned char)38;
int zero = 0;
unsigned long long int var_14 = 15807614762580824841ULL;
signed char var_15 = (signed char)-62;
short var_16 = (short)923;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
