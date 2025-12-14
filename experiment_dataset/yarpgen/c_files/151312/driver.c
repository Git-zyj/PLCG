#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44454;
long long int var_4 = -4089490782558377219LL;
unsigned int var_5 = 2814959367U;
_Bool var_7 = (_Bool)1;
signed char var_12 = (signed char)20;
unsigned long long int var_16 = 14953061922692896110ULL;
int zero = 0;
unsigned long long int var_17 = 13327611600884802090ULL;
unsigned char var_18 = (unsigned char)44;
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
