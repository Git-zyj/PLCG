#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13934056193194763034ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 18198101026261886583ULL;
long long int var_8 = 7375734666774098865LL;
signed char var_11 = (signed char)24;
unsigned int var_12 = 830650405U;
int var_16 = -1939343591;
int zero = 0;
signed char var_17 = (signed char)24;
short var_18 = (short)-12737;
unsigned char var_19 = (unsigned char)229;
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
