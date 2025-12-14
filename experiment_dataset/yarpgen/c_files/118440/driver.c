#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 8512417154953279041ULL;
long long int var_18 = 2542470752624236805LL;
int zero = 0;
unsigned long long int var_20 = 16954790811935574963ULL;
unsigned long long int var_21 = 17018234003279770150ULL;
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
