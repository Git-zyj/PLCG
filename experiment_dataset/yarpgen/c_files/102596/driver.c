#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5213043639814654360ULL;
unsigned char var_3 = (unsigned char)60;
int var_4 = 1350205113;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_13 = 1067361841;
unsigned char var_14 = (unsigned char)55;
void init() {
}

void checksum() {
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
