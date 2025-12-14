#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6051;
long long int var_3 = -4653233392602932314LL;
long long int var_7 = -6606780372896461482LL;
int zero = 0;
unsigned long long int var_14 = 382571215424615840ULL;
int var_15 = -1906873315;
unsigned short var_16 = (unsigned short)8311;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
