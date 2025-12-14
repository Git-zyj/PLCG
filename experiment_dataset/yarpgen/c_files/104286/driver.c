#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13958;
_Bool var_4 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned char var_14 = (unsigned char)177;
unsigned int var_15 = 3853285175U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)215;
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
