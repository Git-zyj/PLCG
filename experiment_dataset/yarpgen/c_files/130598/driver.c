#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-27282;
unsigned char var_10 = (unsigned char)91;
unsigned long long int var_14 = 16318852361680276450ULL;
signed char var_16 = (signed char)63;
int zero = 0;
unsigned long long int var_18 = 12116998612690655363ULL;
_Bool var_19 = (_Bool)0;
long long int var_20 = 2576427805774774342LL;
short var_21 = (short)-6361;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
