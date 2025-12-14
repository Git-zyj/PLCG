#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3598903710659020548LL;
unsigned int var_8 = 704554801U;
unsigned long long int var_9 = 2969329684187022137ULL;
int zero = 0;
signed char var_14 = (signed char)120;
unsigned long long int var_15 = 7119472429540649775ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
