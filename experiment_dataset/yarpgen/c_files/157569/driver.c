#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3281;
unsigned char var_4 = (unsigned char)107;
unsigned int var_8 = 3092805667U;
unsigned long long int var_9 = 4803727387200792804ULL;
unsigned char var_15 = (unsigned char)199;
short var_19 = (short)-29636;
int zero = 0;
unsigned int var_20 = 1314204527U;
int var_21 = 1769789706;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
