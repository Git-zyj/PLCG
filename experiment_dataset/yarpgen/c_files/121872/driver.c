#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)170;
unsigned short var_7 = (unsigned short)30578;
unsigned long long int var_11 = 12612382026197669456ULL;
unsigned char var_15 = (unsigned char)212;
unsigned char var_16 = (unsigned char)74;
int zero = 0;
unsigned long long int var_18 = 5613178829702088500ULL;
unsigned short var_19 = (unsigned short)21114;
unsigned long long int var_20 = 9817105599316679873ULL;
int var_21 = -1973055902;
unsigned long long int var_22 = 5670932885104231713ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
