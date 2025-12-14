#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 3696001224654907697ULL;
unsigned long long int var_14 = 4995849677840095770ULL;
int zero = 0;
unsigned long long int var_20 = 9300283510844542266ULL;
unsigned int var_21 = 972668282U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
