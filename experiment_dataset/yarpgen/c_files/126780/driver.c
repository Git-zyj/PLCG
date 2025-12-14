#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
long long int var_2 = 6721001332360793920LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 1395562697663623308ULL;
unsigned char var_12 = (unsigned char)2;
long long int var_13 = -5237767152322423408LL;
int var_14 = 1291403068;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
