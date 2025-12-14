#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12836050928411227254ULL;
unsigned long long int var_6 = 7857977263205359431ULL;
unsigned long long int var_11 = 12241835001976016620ULL;
unsigned long long int var_12 = 2518925820595230595ULL;
int zero = 0;
unsigned long long int var_14 = 4020540910152851153ULL;
unsigned long long int var_15 = 14607005529568428151ULL;
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
