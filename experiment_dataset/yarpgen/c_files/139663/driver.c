#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32489;
int var_2 = 1034324313;
signed char var_3 = (signed char)-122;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-23801;
unsigned char var_7 = (unsigned char)229;
short var_8 = (short)14286;
unsigned long long int var_9 = 12299411987301174262ULL;
unsigned int var_11 = 4015590320U;
long long int var_13 = -6436759303832496609LL;
unsigned short var_14 = (unsigned short)54777;
int zero = 0;
unsigned short var_16 = (unsigned short)61940;
signed char var_17 = (signed char)37;
int var_18 = -1207337404;
unsigned char var_19 = (unsigned char)136;
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
