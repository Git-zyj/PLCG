#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2214966806837732947LL;
unsigned short var_1 = (unsigned short)8996;
unsigned long long int var_2 = 9812583365806815711ULL;
long long int var_3 = -4718625098826374869LL;
signed char var_8 = (signed char)63;
unsigned short var_9 = (unsigned short)10;
int zero = 0;
unsigned int var_11 = 4278596317U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)63962;
unsigned short var_14 = (unsigned short)18440;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
