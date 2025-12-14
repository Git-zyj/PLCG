#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1632166205;
unsigned long long int var_3 = 10985938538344996750ULL;
unsigned long long int var_9 = 17826599455545229727ULL;
unsigned long long int var_10 = 14562267037149568100ULL;
int zero = 0;
int var_12 = -1073104990;
signed char var_13 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
