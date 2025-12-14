#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 12857379009033424172ULL;
unsigned long long int var_13 = 18396579507846066811ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 11577753266191011852ULL;
signed char var_18 = (signed char)-78;
unsigned char var_19 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
