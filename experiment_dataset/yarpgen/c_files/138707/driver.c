#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 17210668663151027194ULL;
unsigned short var_5 = (unsigned short)14223;
unsigned char var_14 = (unsigned char)125;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 888842658U;
int var_18 = -1143605334;
int zero = 0;
signed char var_20 = (signed char)60;
unsigned short var_21 = (unsigned short)43258;
short var_22 = (short)-16364;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
