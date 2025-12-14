#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -200810879;
unsigned int var_3 = 2001390256U;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)59574;
unsigned short var_8 = (unsigned short)14382;
unsigned short var_12 = (unsigned short)1493;
int zero = 0;
unsigned int var_18 = 741126698U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
