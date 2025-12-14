#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -626581342;
unsigned short var_1 = (unsigned short)42861;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)49;
long long int var_6 = 1938344659897784088LL;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned int var_16 = 1300665739U;
signed char var_19 = (signed char)-49;
int zero = 0;
short var_20 = (short)-25593;
long long int var_21 = -501970326774458922LL;
unsigned char var_22 = (unsigned char)187;
unsigned char var_23 = (unsigned char)12;
void init() {
}

void checksum() {
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
