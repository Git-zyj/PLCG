#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1206073982;
signed char var_5 = (signed char)14;
unsigned int var_12 = 1770059803U;
unsigned long long int var_13 = 1811659132601274661ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1064398542U;
void init() {
}

void checksum() {
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
