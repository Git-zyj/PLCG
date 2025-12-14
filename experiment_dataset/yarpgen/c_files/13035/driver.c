#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1486;
short var_1 = (short)20732;
unsigned char var_4 = (unsigned char)143;
long long int var_7 = 7635609346854953816LL;
int var_10 = -1936171486;
int zero = 0;
unsigned char var_13 = (unsigned char)119;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)196;
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
