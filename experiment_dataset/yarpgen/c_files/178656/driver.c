#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3864906488U;
unsigned char var_5 = (unsigned char)54;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)18;
unsigned short var_11 = (unsigned short)15785;
unsigned short var_12 = (unsigned short)9904;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
