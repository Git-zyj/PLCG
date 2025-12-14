#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2139505633;
long long int var_9 = -7948468888376920244LL;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)-52;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-57;
unsigned char var_20 = (unsigned char)239;
short var_21 = (short)-2092;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)29421;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
