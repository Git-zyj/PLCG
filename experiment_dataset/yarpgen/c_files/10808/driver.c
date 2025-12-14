#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)202;
unsigned long long int var_1 = 10958790596799712875ULL;
unsigned char var_4 = (unsigned char)75;
long long int var_6 = -3513153595183462498LL;
unsigned short var_11 = (unsigned short)6600;
unsigned int var_12 = 1681851264U;
int zero = 0;
int var_13 = 869838634;
unsigned short var_14 = (unsigned short)38786;
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
