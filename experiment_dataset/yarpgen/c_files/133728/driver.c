#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-18756;
signed char var_6 = (signed char)62;
unsigned short var_9 = (unsigned short)7031;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)62;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-10421;
int zero = 0;
signed char var_20 = (signed char)-107;
unsigned int var_21 = 221687220U;
short var_22 = (short)27876;
unsigned short var_23 = (unsigned short)23822;
int var_24 = 1980387890;
void init() {
}

void checksum() {
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
