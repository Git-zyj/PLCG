#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1323167384U;
unsigned int var_3 = 3496323129U;
unsigned char var_5 = (unsigned char)23;
signed char var_6 = (signed char)79;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2667066897U;
unsigned char var_9 = (unsigned char)51;
unsigned char var_10 = (unsigned char)183;
int zero = 0;
signed char var_11 = (signed char)-111;
signed char var_12 = (signed char)83;
signed char var_13 = (signed char)-104;
int var_14 = 1844712602;
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
