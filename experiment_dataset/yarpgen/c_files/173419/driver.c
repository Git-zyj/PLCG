#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4256007044077436418LL;
signed char var_3 = (signed char)-112;
unsigned int var_7 = 3398081672U;
unsigned short var_9 = (unsigned short)24155;
int zero = 0;
unsigned int var_13 = 679785758U;
signed char var_14 = (signed char)-102;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
