#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12218;
int var_2 = 451372183;
int var_4 = 849707919;
int var_7 = -2041293914;
unsigned char var_8 = (unsigned char)226;
int zero = 0;
unsigned char var_12 = (unsigned char)33;
long long int var_13 = 6993124731216657124LL;
unsigned short var_14 = (unsigned short)52535;
void init() {
}

void checksum() {
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
