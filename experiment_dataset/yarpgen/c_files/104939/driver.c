#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 494207642;
signed char var_5 = (signed char)-65;
unsigned int var_7 = 983924694U;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)2042;
int zero = 0;
int var_17 = -1166304819;
short var_18 = (short)6428;
unsigned int var_19 = 2836754633U;
unsigned char var_20 = (unsigned char)22;
int var_21 = 1910850494;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
