#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-14;
long long int var_5 = -760517078907885117LL;
unsigned short var_14 = (unsigned short)32943;
int zero = 0;
unsigned short var_17 = (unsigned short)25591;
unsigned long long int var_18 = 524982718433662093ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
