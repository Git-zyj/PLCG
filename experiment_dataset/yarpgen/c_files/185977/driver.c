#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4258217705U;
long long int var_3 = 8121032768141061644LL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 221675102U;
signed char var_16 = (signed char)106;
unsigned char var_17 = (unsigned char)239;
int zero = 0;
signed char var_18 = (signed char)-100;
unsigned long long int var_19 = 12358270047532901022ULL;
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
