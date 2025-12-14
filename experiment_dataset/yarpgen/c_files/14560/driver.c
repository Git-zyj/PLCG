#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10861665374498790845ULL;
int var_4 = -1492255294;
int var_5 = 284096328;
unsigned int var_7 = 1227357985U;
signed char var_16 = (signed char)84;
int zero = 0;
long long int var_19 = 3376726792914137370LL;
long long int var_20 = 5648823445736047824LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
