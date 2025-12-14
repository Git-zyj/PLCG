#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13635779077408525729ULL;
unsigned long long int var_4 = 14521768532556722297ULL;
int zero = 0;
unsigned int var_11 = 1342673483U;
unsigned long long int var_12 = 7082899045930667841ULL;
unsigned long long int var_13 = 25576069266200934ULL;
unsigned long long int var_14 = 15554419528138507306ULL;
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
