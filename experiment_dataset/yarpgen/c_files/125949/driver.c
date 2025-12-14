#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)61987;
_Bool var_5 = (_Bool)1;
unsigned int var_12 = 1852532503U;
short var_13 = (short)-21485;
long long int var_14 = 2099982659384577550LL;
int var_17 = -817765116;
long long int var_19 = 1773087022064901429LL;
int zero = 0;
long long int var_20 = -8504132607248547085LL;
unsigned int var_21 = 2494235968U;
void init() {
}

void checksum() {
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
