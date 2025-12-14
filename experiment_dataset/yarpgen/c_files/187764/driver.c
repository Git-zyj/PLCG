#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -3815736359761041473LL;
long long int var_10 = -2862206348077116944LL;
unsigned long long int var_11 = 17268142210212954017ULL;
int zero = 0;
int var_13 = 1925239206;
long long int var_14 = 5569473730064790866LL;
unsigned long long int var_15 = 9814769398274011892ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
