#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10349863649980813925ULL;
unsigned char var_5 = (unsigned char)69;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)108;
long long int var_9 = -7762046731302883475LL;
int zero = 0;
int var_12 = 1188342994;
short var_13 = (short)30513;
unsigned int var_14 = 1279388746U;
int var_15 = 1249216857;
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
