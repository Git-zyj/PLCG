#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)73;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)126;
unsigned long long int var_15 = 101329066581830897ULL;
signed char var_16 = (signed char)-72;
long long int var_17 = 3337445262075665677LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
