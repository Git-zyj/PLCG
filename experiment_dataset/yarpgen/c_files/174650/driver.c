#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18212223040369331296ULL;
unsigned long long int var_4 = 430130721298909145ULL;
unsigned short var_5 = (unsigned short)11362;
unsigned long long int var_8 = 2318778607931882733ULL;
int zero = 0;
unsigned long long int var_10 = 11755558807684736742ULL;
unsigned long long int var_11 = 16974091879323838363ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
