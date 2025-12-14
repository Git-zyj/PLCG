#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -693051258736815803LL;
signed char var_2 = (signed char)51;
unsigned long long int var_3 = 17577721484123018225ULL;
unsigned short var_5 = (unsigned short)27699;
long long int var_6 = 2034249390734621042LL;
int zero = 0;
unsigned short var_13 = (unsigned short)3841;
unsigned char var_14 = (unsigned char)251;
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
