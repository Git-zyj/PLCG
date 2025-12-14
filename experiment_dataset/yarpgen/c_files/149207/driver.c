#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1805449949;
unsigned long long int var_10 = 3713271164068013942ULL;
long long int var_11 = -5276383489082727135LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 6131739667019792655ULL;
unsigned char var_16 = (unsigned char)221;
unsigned char var_17 = (unsigned char)54;
short var_18 = (short)13085;
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
