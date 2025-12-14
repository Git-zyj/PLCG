#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4124014156414774118LL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3475890259U;
short var_10 = (short)-7781;
int zero = 0;
long long int var_11 = -7724134273204285721LL;
unsigned int var_12 = 4224305628U;
unsigned short var_13 = (unsigned short)9692;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
