#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1996100768148340328LL;
unsigned short var_5 = (unsigned short)28697;
unsigned long long int var_6 = 14535936194789962158ULL;
signed char var_8 = (signed char)95;
unsigned short var_10 = (unsigned short)23208;
int zero = 0;
signed char var_11 = (signed char)62;
short var_12 = (short)-9460;
int var_13 = -833270597;
unsigned long long int var_14 = 11790465766665348774ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
