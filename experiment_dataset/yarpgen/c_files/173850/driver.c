#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)5392;
long long int var_6 = -3502095758171182043LL;
unsigned int var_8 = 783163473U;
long long int var_10 = 4651692198283532340LL;
long long int var_11 = 3085654750791283991LL;
int zero = 0;
long long int var_13 = -7917912734547402991LL;
unsigned short var_14 = (unsigned short)43180;
signed char var_15 = (signed char)28;
unsigned long long int var_16 = 10921490741870102769ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
