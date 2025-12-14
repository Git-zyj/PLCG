#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)229;
unsigned long long int var_3 = 10325201119291879701ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)38919;
unsigned long long int var_8 = 14471491421534734716ULL;
int zero = 0;
unsigned long long int var_10 = 6345204768807646033ULL;
unsigned char var_11 = (unsigned char)252;
unsigned int var_12 = 2374445727U;
unsigned long long int var_13 = 3618287789160565021ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
