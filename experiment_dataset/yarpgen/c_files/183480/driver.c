#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 445904612;
_Bool var_6 = (_Bool)0;
int var_8 = -304662954;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)97;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 1037566080100365976LL;
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
