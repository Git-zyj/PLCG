#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 10399221895451588719ULL;
long long int var_17 = 8173200967033592871LL;
unsigned long long int var_18 = 7378557074621522069ULL;
unsigned short var_19 = (unsigned short)52589;
int zero = 0;
unsigned long long int var_20 = 3893482634783403883ULL;
long long int var_21 = -8521502300717397022LL;
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
