#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)1;
long long int var_2 = -5614648498691206422LL;
long long int var_3 = 4993580797338276310LL;
unsigned short var_4 = (unsigned short)55728;
unsigned long long int var_7 = 5550460883344312861ULL;
long long int var_8 = 2982535158922787171LL;
unsigned int var_17 = 558154812U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)220;
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
