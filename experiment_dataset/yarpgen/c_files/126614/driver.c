#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)14;
long long int var_5 = 6200148682993614038LL;
long long int var_6 = -6741509550931877735LL;
unsigned long long int var_9 = 2089275737555534959ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)20593;
signed char var_11 = (signed char)14;
unsigned long long int var_12 = 14946950455830307290ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
