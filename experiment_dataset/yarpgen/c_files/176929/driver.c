#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9781105333638155002ULL;
unsigned char var_7 = (unsigned char)196;
_Bool var_10 = (_Bool)0;
unsigned short var_14 = (unsigned short)24950;
unsigned char var_15 = (unsigned char)224;
int zero = 0;
long long int var_18 = -2256878767748476923LL;
long long int var_19 = 5668410560796737196LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
