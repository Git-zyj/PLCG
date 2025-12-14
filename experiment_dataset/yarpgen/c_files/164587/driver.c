#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 2456423621U;
short var_4 = (short)-17942;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_10 = 1308394870260854875LL;
unsigned char var_11 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
