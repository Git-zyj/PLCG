#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 16810616433431712779ULL;
short var_7 = (short)-25880;
int zero = 0;
unsigned short var_11 = (unsigned short)18889;
unsigned short var_12 = (unsigned short)52286;
long long int var_13 = 8188724651396709177LL;
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
