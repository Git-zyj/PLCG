#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_12 = (_Bool)1;
unsigned int var_14 = 2240030888U;
unsigned long long int var_17 = 17128230919447693518ULL;
int zero = 0;
signed char var_20 = (signed char)-125;
unsigned char var_21 = (unsigned char)53;
unsigned short var_22 = (unsigned short)1080;
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
