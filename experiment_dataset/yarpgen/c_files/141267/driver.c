#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)107;
long long int var_11 = 3127629895535121351LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 13108050486860483460ULL;
unsigned char var_19 = (unsigned char)24;
unsigned short var_20 = (unsigned short)27151;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
