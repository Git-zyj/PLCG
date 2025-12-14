#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57072;
unsigned char var_3 = (unsigned char)241;
_Bool var_4 = (_Bool)0;
int var_5 = -332970448;
unsigned char var_12 = (unsigned char)174;
int zero = 0;
unsigned int var_13 = 2534954527U;
unsigned int var_14 = 121746572U;
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
