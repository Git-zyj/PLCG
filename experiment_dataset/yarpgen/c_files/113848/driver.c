#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1514468726U;
unsigned char var_4 = (unsigned char)38;
long long int var_14 = -8824405708993534669LL;
unsigned char var_18 = (unsigned char)115;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)13244;
short var_21 = (short)11479;
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
