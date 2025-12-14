#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43832;
unsigned int var_7 = 4124036427U;
unsigned char var_10 = (unsigned char)0;
unsigned int var_14 = 1155531044U;
int zero = 0;
unsigned char var_18 = (unsigned char)199;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
