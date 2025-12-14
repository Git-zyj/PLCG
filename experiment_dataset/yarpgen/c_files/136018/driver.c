#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)223;
unsigned long long int var_5 = 9704762456606534868ULL;
short var_11 = (short)9097;
long long int var_13 = 47622745552642017LL;
int zero = 0;
unsigned long long int var_16 = 5332201916652761407ULL;
unsigned long long int var_17 = 15642987827121537264ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
