#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)65;
signed char var_9 = (signed char)-7;
int var_14 = 999571547;
short var_15 = (short)-690;
unsigned int var_18 = 445350625U;
int zero = 0;
unsigned char var_19 = (unsigned char)140;
unsigned short var_20 = (unsigned short)4763;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
