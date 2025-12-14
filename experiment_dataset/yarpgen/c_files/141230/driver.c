#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)118;
unsigned int var_5 = 4229316185U;
unsigned short var_6 = (unsigned short)23948;
unsigned char var_8 = (unsigned char)71;
unsigned short var_9 = (unsigned short)22037;
short var_10 = (short)9411;
unsigned int var_12 = 2920616656U;
unsigned int var_15 = 2879037045U;
unsigned char var_18 = (unsigned char)160;
int zero = 0;
unsigned char var_19 = (unsigned char)10;
unsigned short var_20 = (unsigned short)13815;
unsigned char var_21 = (unsigned char)89;
unsigned short var_22 = (unsigned short)52416;
unsigned char var_23 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
