#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)125;
int var_1 = -89292257;
signed char var_4 = (signed char)91;
signed char var_5 = (signed char)-13;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)129;
unsigned short var_11 = (unsigned short)33715;
unsigned int var_12 = 3860005462U;
int zero = 0;
unsigned long long int var_16 = 15625818035403968212ULL;
unsigned int var_17 = 2214298507U;
int var_18 = -225586979;
signed char var_19 = (signed char)27;
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
