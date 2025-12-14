#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
short var_3 = (short)-21023;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)73;
short var_9 = (short)-4148;
unsigned int var_12 = 1423231330U;
int zero = 0;
int var_13 = -115535897;
short var_14 = (short)-12779;
signed char var_15 = (signed char)-13;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
