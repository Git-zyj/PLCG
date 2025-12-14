#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -548257713;
short var_1 = (short)12958;
unsigned short var_4 = (unsigned short)10671;
unsigned short var_7 = (unsigned short)44789;
unsigned short var_10 = (unsigned short)887;
int zero = 0;
unsigned short var_15 = (unsigned short)41467;
unsigned short var_16 = (unsigned short)28753;
unsigned short var_17 = (unsigned short)31875;
unsigned short var_18 = (unsigned short)11188;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
