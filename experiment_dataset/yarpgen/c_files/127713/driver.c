#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 400348444;
signed char var_1 = (signed char)-35;
unsigned int var_3 = 1255200727U;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-16793;
int var_9 = -654406663;
int zero = 0;
int var_12 = -290714010;
unsigned char var_13 = (unsigned char)8;
int var_14 = 2114266477;
int var_15 = -638138763;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
