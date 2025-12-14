#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -2115908569;
int var_4 = -968663768;
unsigned char var_7 = (unsigned char)203;
int var_11 = 1227032759;
unsigned long long int var_14 = 10897092781866705691ULL;
int var_15 = 1305156404;
int zero = 0;
unsigned char var_17 = (unsigned char)187;
signed char var_18 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
