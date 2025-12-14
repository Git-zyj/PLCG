#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -300984807;
unsigned char var_6 = (unsigned char)163;
unsigned short var_10 = (unsigned short)31940;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 4001320224U;
unsigned int var_16 = 1194891971U;
signed char var_17 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
