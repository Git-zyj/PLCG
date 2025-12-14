#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 761818277U;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)168;
_Bool var_6 = (_Bool)0;
long long int var_8 = 8730279889655611174LL;
int zero = 0;
long long int var_15 = 3323313976215588756LL;
unsigned short var_16 = (unsigned short)48754;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
