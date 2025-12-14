#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7479845851499507935ULL;
unsigned char var_4 = (unsigned char)58;
int var_10 = -1856649680;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)45;
signed char var_21 = (signed char)-53;
unsigned long long int var_22 = 2169913782073942980ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
