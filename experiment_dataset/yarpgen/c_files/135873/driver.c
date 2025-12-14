#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-24287;
unsigned short var_12 = (unsigned short)29795;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)54063;
int zero = 0;
unsigned char var_16 = (unsigned char)8;
long long int var_17 = -4795261885867685149LL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-44;
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
