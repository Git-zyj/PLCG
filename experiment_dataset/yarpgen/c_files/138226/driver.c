#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1665904454;
unsigned short var_7 = (unsigned short)19202;
unsigned long long int var_8 = 4513704976927573327ULL;
unsigned long long int var_10 = 6442884422677126005ULL;
signed char var_13 = (signed char)-123;
int zero = 0;
unsigned char var_14 = (unsigned char)3;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1282255884U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
