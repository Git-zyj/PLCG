#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)27;
int var_4 = -831662273;
short var_6 = (short)-8976;
unsigned int var_10 = 77383164U;
long long int var_11 = 9001858876550246544LL;
unsigned short var_12 = (unsigned short)25914;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1793323654U;
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
