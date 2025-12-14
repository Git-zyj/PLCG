#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13110;
unsigned long long int var_3 = 13852022305240688908ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)18712;
unsigned char var_8 = (unsigned char)170;
long long int var_10 = 2047972130567228244LL;
int zero = 0;
unsigned short var_11 = (unsigned short)27420;
unsigned long long int var_12 = 8774162196104455128ULL;
short var_13 = (short)18637;
unsigned char var_14 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
