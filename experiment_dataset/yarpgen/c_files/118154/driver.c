#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30626;
_Bool var_3 = (_Bool)0;
long long int var_5 = -6489714908618496457LL;
unsigned int var_6 = 3119355645U;
int zero = 0;
short var_12 = (short)31518;
int var_13 = -114008599;
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
