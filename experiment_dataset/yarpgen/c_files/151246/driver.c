#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19603;
unsigned short var_1 = (unsigned short)33071;
int var_2 = -458814494;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 4164553996U;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)207;
int zero = 0;
signed char var_17 = (signed char)21;
unsigned int var_18 = 1288025205U;
short var_19 = (short)2134;
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
