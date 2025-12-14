#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 969245023;
long long int var_3 = -1799625736639406810LL;
unsigned long long int var_4 = 13432249648971460646ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)16;
unsigned long long int var_12 = 2963677872406325295ULL;
unsigned long long int var_13 = 11756750234972333422ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
