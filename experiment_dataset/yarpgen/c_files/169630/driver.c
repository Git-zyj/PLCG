#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1393503751U;
_Bool var_7 = (_Bool)0;
int var_9 = -1994363224;
int zero = 0;
unsigned int var_12 = 3363106664U;
short var_13 = (short)26453;
unsigned char var_14 = (unsigned char)10;
unsigned short var_15 = (unsigned short)44641;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
