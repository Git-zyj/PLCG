#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31438;
_Bool var_1 = (_Bool)1;
int var_2 = 1806400691;
unsigned short var_4 = (unsigned short)33704;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)66;
int zero = 0;
short var_12 = (short)-18946;
short var_13 = (short)4692;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
