#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_5 = 16031707153628770965ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 9934312009008213541ULL;
unsigned long long int var_11 = 5103037474381285892ULL;
int zero = 0;
int var_13 = 1390988601;
unsigned char var_14 = (unsigned char)56;
int var_15 = 744386675;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
