#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24971;
unsigned int var_6 = 1586439472U;
unsigned int var_7 = 1950910902U;
long long int var_8 = 949764852825335182LL;
unsigned char var_10 = (unsigned char)142;
int var_11 = 609762176;
int var_12 = 1737985013;
unsigned short var_13 = (unsigned short)29729;
int zero = 0;
int var_15 = 422933104;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 3614985206905322560ULL;
void init() {
}

void checksum() {
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
