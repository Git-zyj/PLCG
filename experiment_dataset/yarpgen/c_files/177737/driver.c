#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)83;
_Bool var_6 = (_Bool)1;
unsigned int var_9 = 3514128497U;
short var_10 = (short)-353;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 1706385820U;
unsigned short var_19 = (unsigned short)27493;
int var_20 = 1258895065;
unsigned int var_21 = 2831775113U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
