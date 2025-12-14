#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -470994694763069678LL;
long long int var_4 = -5989646767726391587LL;
unsigned long long int var_7 = 2319436862203401519ULL;
long long int var_9 = 6665984116858570139LL;
int zero = 0;
int var_11 = -1775095704;
unsigned long long int var_12 = 2983274493764479685ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
