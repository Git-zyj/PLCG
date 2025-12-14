#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1640474024U;
int var_8 = 1339236761;
int zero = 0;
unsigned long long int var_12 = 902512589896583764ULL;
unsigned short var_13 = (unsigned short)31883;
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
