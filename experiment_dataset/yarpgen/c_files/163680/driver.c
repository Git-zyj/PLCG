#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_4 = 2753101493U;
unsigned char var_10 = (unsigned char)28;
unsigned char var_11 = (unsigned char)248;
long long int var_12 = -7198679679736200603LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 7349057345666444352ULL;
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
