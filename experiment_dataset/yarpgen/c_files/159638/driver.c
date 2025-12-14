#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 344504883153585509ULL;
unsigned long long int var_7 = 14537264141276452377ULL;
unsigned char var_9 = (unsigned char)15;
unsigned long long int var_11 = 5709989669865897625ULL;
unsigned char var_13 = (unsigned char)231;
int zero = 0;
long long int var_15 = -2668118032488371232LL;
unsigned long long int var_16 = 2661559335471079541ULL;
signed char var_17 = (signed char)-63;
signed char var_18 = (signed char)-41;
unsigned char var_19 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
