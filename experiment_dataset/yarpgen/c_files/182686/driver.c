#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3910694983606246186LL;
unsigned long long int var_7 = 18434967177187871025ULL;
long long int var_8 = 3345734271922261621LL;
unsigned long long int var_9 = 4079709868971941221ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)21311;
signed char var_13 = (signed char)-65;
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
