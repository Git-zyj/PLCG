#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11691;
unsigned long long int var_1 = 17016690520458114465ULL;
unsigned int var_2 = 2587382739U;
unsigned short var_3 = (unsigned short)64971;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-41;
short var_8 = (short)-7643;
short var_9 = (short)18527;
unsigned short var_10 = (unsigned short)44120;
short var_11 = (short)18155;
int zero = 0;
short var_13 = (short)2098;
unsigned char var_14 = (unsigned char)79;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)14117;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
