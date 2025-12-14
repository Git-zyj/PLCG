#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15076286325208204116ULL;
unsigned char var_4 = (unsigned char)63;
unsigned char var_9 = (unsigned char)17;
unsigned int var_13 = 253427842U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)146;
int var_21 = -1687841336;
unsigned char var_22 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
