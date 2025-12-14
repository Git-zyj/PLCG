#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 531111648180430811LL;
unsigned int var_4 = 2368080119U;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)53;
int zero = 0;
short var_12 = (short)13173;
short var_13 = (short)-13150;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
