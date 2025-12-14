#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5206;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 12064435533242807071ULL;
unsigned short var_21 = (unsigned short)45663;
unsigned char var_22 = (unsigned char)72;
long long int var_23 = -6448716549157294493LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
