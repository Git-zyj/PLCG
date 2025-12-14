#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)211;
_Bool var_13 = (_Bool)1;
unsigned char var_16 = (unsigned char)152;
int zero = 0;
signed char var_19 = (signed char)-67;
unsigned int var_20 = 486737426U;
long long int var_21 = 5396228965870530201LL;
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
