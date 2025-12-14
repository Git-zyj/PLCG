#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)74;
long long int var_2 = -2441248387677347675LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3352155491U;
long long int var_15 = 1471178170886845748LL;
unsigned short var_16 = (unsigned short)53100;
void init() {
}

void checksum() {
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
