#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
unsigned char var_1 = (unsigned char)105;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 13693537088038474758ULL;
int var_9 = -2015367976;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
