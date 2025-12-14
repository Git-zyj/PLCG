#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3846048580U;
unsigned long long int var_6 = 3851352223711582101ULL;
_Bool var_9 = (_Bool)1;
long long int var_12 = 6773788849644643762LL;
unsigned char var_13 = (unsigned char)214;
int zero = 0;
signed char var_15 = (signed char)-7;
unsigned int var_16 = 555069825U;
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
