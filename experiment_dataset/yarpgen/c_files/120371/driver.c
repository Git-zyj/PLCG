#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)227;
short var_4 = (short)-7295;
unsigned char var_7 = (unsigned char)23;
unsigned char var_9 = (unsigned char)106;
unsigned char var_14 = (unsigned char)150;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-42;
int var_22 = 1052272558;
unsigned char var_23 = (unsigned char)31;
unsigned short var_24 = (unsigned short)56861;
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
