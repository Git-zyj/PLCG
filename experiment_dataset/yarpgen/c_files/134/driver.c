#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18077;
unsigned int var_5 = 3814908995U;
unsigned short var_6 = (unsigned short)44970;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_12 = 4074068515580097400LL;
unsigned int var_13 = 3494912201U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
