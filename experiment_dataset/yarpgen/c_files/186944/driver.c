#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 831438612;
int var_7 = -964825951;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1969899159U;
short var_10 = (short)-4390;
signed char var_12 = (signed char)-17;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)54;
int zero = 0;
unsigned char var_18 = (unsigned char)10;
unsigned char var_19 = (unsigned char)193;
unsigned char var_20 = (unsigned char)253;
unsigned char var_21 = (unsigned char)145;
_Bool var_22 = (_Bool)1;
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
