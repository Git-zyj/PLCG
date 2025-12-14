#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)253;
_Bool var_9 = (_Bool)1;
int var_14 = -786687997;
unsigned int var_16 = 3834565170U;
int zero = 0;
signed char var_19 = (signed char)-31;
long long int var_20 = 4884818973880267853LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
