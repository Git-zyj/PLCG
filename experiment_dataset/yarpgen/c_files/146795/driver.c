#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1297446851U;
unsigned char var_3 = (unsigned char)232;
short var_8 = (short)-8117;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned short var_15 = (unsigned short)12607;
int zero = 0;
signed char var_16 = (signed char)-103;
short var_17 = (short)-6170;
unsigned long long int var_18 = 15016635718753233038ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
