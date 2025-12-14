#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1771989599U;
short var_3 = (short)-32228;
unsigned int var_5 = 3081338614U;
unsigned int var_6 = 36351250U;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)28;
int zero = 0;
long long int var_15 = 6884492093324021446LL;
unsigned int var_16 = 384718141U;
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
