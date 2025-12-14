#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4478768376045682355ULL;
unsigned long long int var_16 = 563163210857125923ULL;
int zero = 0;
unsigned long long int var_17 = 10568267841227518751ULL;
unsigned long long int var_18 = 9951676625095966542ULL;
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
