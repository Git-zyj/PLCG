#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1057570564;
unsigned char var_6 = (unsigned char)251;
short var_7 = (short)8373;
unsigned char var_8 = (unsigned char)235;
unsigned long long int var_12 = 4572622863588818621ULL;
int zero = 0;
long long int var_17 = -3780162170161800870LL;
unsigned short var_18 = (unsigned short)15051;
void init() {
}

void checksum() {
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
