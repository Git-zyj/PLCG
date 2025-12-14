#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_8 = (unsigned char)229;
unsigned long long int var_10 = 5560875177527075270ULL;
unsigned short var_14 = (unsigned short)38102;
int zero = 0;
signed char var_15 = (signed char)-123;
unsigned short var_16 = (unsigned short)57943;
unsigned long long int var_17 = 6390696072921028272ULL;
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
