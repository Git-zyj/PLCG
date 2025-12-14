#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1654905517920830351LL;
unsigned char var_6 = (unsigned char)103;
_Bool var_8 = (_Bool)1;
int var_9 = 1935368600;
int zero = 0;
int var_10 = -734719416;
unsigned int var_11 = 4237102490U;
unsigned long long int var_12 = 12894531726919396700ULL;
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
