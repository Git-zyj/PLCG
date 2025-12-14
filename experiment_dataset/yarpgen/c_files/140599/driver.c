#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 510270385U;
unsigned short var_1 = (unsigned short)64605;
long long int var_5 = 347184883934055293LL;
unsigned short var_6 = (unsigned short)12969;
unsigned int var_8 = 2693051509U;
_Bool var_9 = (_Bool)0;
int var_12 = -846830757;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)60;
int zero = 0;
unsigned int var_18 = 3264290672U;
short var_19 = (short)-2037;
signed char var_20 = (signed char)-13;
long long int var_21 = 5330143725784796192LL;
short var_22 = (short)-31653;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
