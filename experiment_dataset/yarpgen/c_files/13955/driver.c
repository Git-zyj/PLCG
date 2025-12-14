#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2428547482352627259ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_12 = (unsigned short)50562;
unsigned int var_16 = 2254266033U;
int zero = 0;
unsigned char var_17 = (unsigned char)111;
short var_18 = (short)31688;
unsigned long long int var_19 = 8370960889025016437ULL;
int var_20 = 263454128;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
