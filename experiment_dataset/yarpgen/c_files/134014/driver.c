#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25359;
signed char var_3 = (signed char)-119;
unsigned short var_5 = (unsigned short)49176;
unsigned int var_7 = 3767948553U;
unsigned char var_9 = (unsigned char)4;
int zero = 0;
short var_10 = (short)-32251;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
