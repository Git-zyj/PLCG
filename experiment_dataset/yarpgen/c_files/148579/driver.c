#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)63980;
_Bool var_12 = (_Bool)0;
long long int var_15 = -4176918072016656224LL;
unsigned int var_16 = 1599794404U;
int zero = 0;
unsigned char var_17 = (unsigned char)53;
signed char var_18 = (signed char)-67;
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
