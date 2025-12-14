#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)90;
unsigned char var_8 = (unsigned char)146;
unsigned short var_9 = (unsigned short)54427;
unsigned long long int var_11 = 2836897321057283906ULL;
unsigned char var_12 = (unsigned char)92;
int zero = 0;
short var_13 = (short)10588;
signed char var_14 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
