#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8988699656001933215ULL;
unsigned char var_3 = (unsigned char)6;
unsigned int var_4 = 2701077361U;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)170;
unsigned short var_10 = (unsigned short)1800;
unsigned short var_12 = (unsigned short)34293;
unsigned char var_13 = (unsigned char)10;
unsigned long long int var_15 = 10188874539000774046ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)3777;
void init() {
}

void checksum() {
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
