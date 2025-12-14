#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
unsigned long long int var_2 = 16919637998401432339ULL;
unsigned long long int var_6 = 14399881363454216555ULL;
short var_8 = (short)4568;
int zero = 0;
unsigned short var_13 = (unsigned short)27363;
int var_14 = -825462793;
unsigned short var_15 = (unsigned short)9772;
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
