#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)1;
int var_13 = 532346689;
unsigned short var_17 = (unsigned short)43319;
unsigned long long int var_18 = 1742422449808050395ULL;
int zero = 0;
int var_20 = 1199083112;
long long int var_21 = 3915385830507360277LL;
unsigned char var_22 = (unsigned char)25;
unsigned long long int var_23 = 2564038979530332899ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
