#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16929549028412467961ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-84;
unsigned long long int var_7 = 5132804920505337198ULL;
unsigned char var_8 = (unsigned char)166;
int var_10 = 1199418023;
unsigned char var_12 = (unsigned char)42;
int zero = 0;
unsigned long long int var_14 = 9473591877912885134ULL;
unsigned char var_15 = (unsigned char)44;
int var_16 = -308522045;
unsigned int var_17 = 4212982769U;
unsigned char var_18 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
