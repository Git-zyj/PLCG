#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11422355338827628639ULL;
unsigned short var_2 = (unsigned short)44691;
int var_4 = 1772303138;
unsigned short var_5 = (unsigned short)30273;
unsigned char var_6 = (unsigned char)74;
short var_7 = (short)2201;
long long int var_9 = -6990572295824453071LL;
unsigned short var_11 = (unsigned short)53385;
long long int var_12 = -5970205115094219622LL;
int var_13 = 1449411012;
short var_15 = (short)-18588;
int zero = 0;
short var_16 = (short)29087;
unsigned long long int var_17 = 2849330491643650517ULL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)34;
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
