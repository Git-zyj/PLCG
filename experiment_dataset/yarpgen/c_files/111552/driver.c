#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)170;
long long int var_3 = -1223021397012924549LL;
unsigned short var_4 = (unsigned short)4060;
signed char var_6 = (signed char)32;
int zero = 0;
unsigned char var_12 = (unsigned char)99;
short var_13 = (short)-8458;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
