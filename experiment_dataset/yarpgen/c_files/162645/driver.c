#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14284799894300244589ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 13577572767320479817ULL;
int var_6 = 5724116;
unsigned long long int var_9 = 14539757547868465514ULL;
unsigned char var_11 = (unsigned char)237;
unsigned int var_16 = 3401833214U;
int zero = 0;
unsigned long long int var_17 = 1519791344290857275ULL;
unsigned int var_18 = 3630853736U;
unsigned char var_19 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
