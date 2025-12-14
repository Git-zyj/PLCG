#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6632052691164581551ULL;
unsigned short var_5 = (unsigned short)20409;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-110;
int zero = 0;
unsigned long long int var_11 = 6024943518426074230ULL;
int var_12 = 1520769144;
void init() {
}

void checksum() {
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
