#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
int var_2 = 384366955;
signed char var_5 = (signed char)-119;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 8300483408688700648ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3678417709U;
unsigned short var_14 = (unsigned short)36332;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
