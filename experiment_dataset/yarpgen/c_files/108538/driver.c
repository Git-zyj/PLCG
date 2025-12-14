#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4631479907028103390ULL;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)208;
int zero = 0;
signed char var_12 = (signed char)41;
unsigned int var_13 = 2663759974U;
unsigned char var_14 = (unsigned char)178;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
