#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -285469706;
unsigned char var_6 = (unsigned char)235;
unsigned char var_9 = (unsigned char)222;
signed char var_10 = (signed char)122;
int zero = 0;
unsigned long long int var_11 = 14679384292509237209ULL;
_Bool var_12 = (_Bool)0;
int var_13 = 1178174301;
unsigned short var_14 = (unsigned short)60883;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
