#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28653;
unsigned int var_1 = 2261606699U;
int var_10 = -2142899003;
short var_11 = (short)-31150;
unsigned short var_16 = (unsigned short)50137;
int zero = 0;
long long int var_17 = -4245661263316261371LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
