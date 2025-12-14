#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63504;
_Bool var_4 = (_Bool)0;
unsigned long long int var_11 = 12827223672674450064ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)47507;
unsigned long long int var_14 = 5464236799905777474ULL;
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
