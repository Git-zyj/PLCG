#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_3 = (unsigned short)19690;
unsigned char var_5 = (unsigned char)179;
_Bool var_8 = (_Bool)0;
long long int var_9 = 2904337492557271255LL;
int var_12 = 1474681961;
unsigned int var_14 = 1469679821U;
int var_17 = -25745932;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)20058;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-34;
_Bool var_22 = (_Bool)0;
int var_23 = 181683787;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
