#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
unsigned char var_6 = (unsigned char)43;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)74;
int zero = 0;
unsigned char var_15 = (unsigned char)98;
unsigned char var_16 = (unsigned char)128;
_Bool var_17 = (_Bool)0;
int var_18 = -1849059;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
