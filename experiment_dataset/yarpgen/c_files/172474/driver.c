#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1023497691;
unsigned long long int var_4 = 12228550593640336093ULL;
signed char var_5 = (signed char)109;
int var_8 = -2046514396;
int var_10 = 235413211;
long long int var_11 = -6886714930297695011LL;
int zero = 0;
unsigned long long int var_12 = 12117872598505782399ULL;
int var_13 = 1632627028;
int var_14 = -379472329;
void init() {
}

void checksum() {
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
