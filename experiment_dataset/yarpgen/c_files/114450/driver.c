#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3542868143U;
long long int var_3 = 3372379450111860440LL;
short var_6 = (short)22167;
unsigned long long int var_17 = 11398776188639464622ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)69;
unsigned char var_20 = (unsigned char)192;
unsigned long long int var_21 = 3951271234012813241ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
