#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59848;
unsigned char var_3 = (unsigned char)13;
int var_4 = 669566866;
signed char var_14 = (signed char)-90;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 10820847527661236286ULL;
unsigned long long int var_17 = 3873361524710450040ULL;
void init() {
}

void checksum() {
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
