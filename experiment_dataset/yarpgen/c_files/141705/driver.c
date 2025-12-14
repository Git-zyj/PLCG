#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)30615;
signed char var_4 = (signed char)-126;
unsigned char var_9 = (unsigned char)224;
int var_10 = 1583366667;
short var_19 = (short)11348;
int zero = 0;
unsigned short var_20 = (unsigned short)55329;
unsigned int var_21 = 3394537897U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
