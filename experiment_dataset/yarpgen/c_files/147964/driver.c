#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64704;
unsigned char var_8 = (unsigned char)255;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)51930;
int zero = 0;
unsigned char var_14 = (unsigned char)39;
signed char var_15 = (signed char)60;
void init() {
}

void checksum() {
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
