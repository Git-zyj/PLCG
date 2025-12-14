#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-698;
unsigned short var_1 = (unsigned short)30211;
unsigned short var_3 = (unsigned short)14422;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)62440;
int zero = 0;
int var_12 = -2084838215;
unsigned long long int var_13 = 14742852858194333180ULL;
void init() {
}

void checksum() {
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
