#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17863183626236922559ULL;
short var_5 = (short)28637;
signed char var_6 = (signed char)-24;
unsigned short var_10 = (unsigned short)54412;
unsigned short var_15 = (unsigned short)31861;
int zero = 0;
int var_17 = -813745951;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)17;
unsigned long long int var_20 = 345353925539968654ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
