#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1319436530;
unsigned long long int var_4 = 4049821131868566349ULL;
int var_6 = 923366812;
unsigned long long int var_8 = 17062164812193618876ULL;
int zero = 0;
unsigned long long int var_12 = 16647233605265581882ULL;
long long int var_13 = -6419744315072755628LL;
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
