#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)97;
short var_3 = (short)28569;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-2;
int zero = 0;
long long int var_14 = 7189711344559693605LL;
int var_15 = -1200338321;
unsigned int var_16 = 3212969335U;
int var_17 = 1903910630;
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
