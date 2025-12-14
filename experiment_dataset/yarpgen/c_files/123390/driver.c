#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15721;
unsigned char var_1 = (unsigned char)86;
long long int var_2 = -4262682509731764041LL;
long long int var_4 = 1563098656649830250LL;
int zero = 0;
unsigned short var_12 = (unsigned short)2064;
long long int var_13 = -3658725453708667020LL;
unsigned char var_14 = (unsigned char)237;
unsigned char var_15 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
