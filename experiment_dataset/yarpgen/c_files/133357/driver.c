#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14283;
unsigned long long int var_2 = 13708473504441225564ULL;
unsigned long long int var_7 = 8612072890662991545ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 15275376392559983552ULL;
unsigned short var_12 = (unsigned short)58748;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
