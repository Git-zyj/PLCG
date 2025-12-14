#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-60;
unsigned char var_3 = (unsigned char)200;
unsigned int var_4 = 3962931513U;
int var_5 = 2079523129;
_Bool var_6 = (_Bool)1;
int var_7 = -285727258;
short var_9 = (short)3041;
int zero = 0;
unsigned char var_10 = (unsigned char)75;
unsigned int var_11 = 4284533600U;
signed char var_12 = (signed char)125;
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
