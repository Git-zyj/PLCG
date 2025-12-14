#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1583079602U;
unsigned char var_5 = (unsigned char)25;
unsigned char var_10 = (unsigned char)216;
signed char var_14 = (signed char)63;
long long int var_18 = 5937803271699036873LL;
int var_19 = 1060293870;
int zero = 0;
unsigned int var_20 = 4116552114U;
unsigned char var_21 = (unsigned char)119;
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
