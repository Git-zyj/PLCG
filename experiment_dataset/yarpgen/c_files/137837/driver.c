#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1665;
unsigned char var_1 = (unsigned char)72;
long long int var_4 = -3937773224560221827LL;
short var_5 = (short)-15055;
int var_8 = 1182812347;
unsigned char var_9 = (unsigned char)38;
unsigned int var_10 = 604857948U;
unsigned short var_11 = (unsigned short)54714;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)1939;
unsigned int var_14 = 1005626948U;
unsigned int var_15 = 3082340736U;
short var_16 = (short)30076;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
