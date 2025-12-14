#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53279;
signed char var_4 = (signed char)-62;
_Bool var_5 = (_Bool)1;
int var_6 = 1354651175;
unsigned short var_12 = (unsigned short)8942;
signed char var_13 = (signed char)122;
unsigned short var_17 = (unsigned short)3949;
int zero = 0;
int var_18 = -1360148022;
signed char var_19 = (signed char)7;
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
