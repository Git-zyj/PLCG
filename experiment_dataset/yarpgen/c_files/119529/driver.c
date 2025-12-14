#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1282607892U;
unsigned int var_2 = 3721050911U;
unsigned char var_3 = (unsigned char)42;
unsigned short var_5 = (unsigned short)3370;
short var_7 = (short)26082;
signed char var_14 = (signed char)113;
int zero = 0;
int var_16 = 1617309277;
unsigned long long int var_17 = 17230929976085751174ULL;
signed char var_18 = (signed char)-33;
void init() {
}

void checksum() {
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
