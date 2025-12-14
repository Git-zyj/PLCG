#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2032841409;
_Bool var_2 = (_Bool)1;
int var_8 = 342504595;
long long int var_11 = 959055353207301143LL;
int zero = 0;
unsigned char var_14 = (unsigned char)76;
unsigned char var_15 = (unsigned char)161;
_Bool var_16 = (_Bool)1;
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
