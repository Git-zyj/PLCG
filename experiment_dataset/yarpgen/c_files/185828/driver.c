#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2055067831606769458ULL;
unsigned short var_8 = (unsigned short)31553;
signed char var_14 = (signed char)46;
unsigned short var_18 = (unsigned short)3738;
int zero = 0;
int var_20 = 1169628019;
int var_21 = -1091930054;
unsigned short var_22 = (unsigned short)5913;
short var_23 = (short)-4145;
void init() {
}

void checksum() {
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
