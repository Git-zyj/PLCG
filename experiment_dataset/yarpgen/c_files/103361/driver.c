#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9827475846711341389ULL;
unsigned short var_5 = (unsigned short)46326;
unsigned long long int var_6 = 5390917864870766911ULL;
unsigned char var_11 = (unsigned char)48;
int zero = 0;
unsigned short var_13 = (unsigned short)24556;
long long int var_14 = 9000974442197507169LL;
long long int var_15 = 4172766152885593861LL;
short var_16 = (short)-13345;
unsigned char var_17 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
