#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 953061061;
_Bool var_2 = (_Bool)1;
long long int var_3 = -1993214595461527499LL;
int var_9 = 1194054059;
int zero = 0;
int var_17 = 792356448;
int var_18 = 1875573691;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
