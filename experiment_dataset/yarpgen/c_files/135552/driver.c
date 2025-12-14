#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
unsigned short var_5 = (unsigned short)46500;
signed char var_6 = (signed char)46;
unsigned long long int var_8 = 12490226859619227576ULL;
unsigned long long int var_10 = 3184097268573513620ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -9180270404977831118LL;
unsigned short var_18 = (unsigned short)2269;
void init() {
}

void checksum() {
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
