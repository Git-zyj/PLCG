#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -870532250572048851LL;
long long int var_16 = 1206465149066083357LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 11450209181780330142ULL;
unsigned char var_21 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
