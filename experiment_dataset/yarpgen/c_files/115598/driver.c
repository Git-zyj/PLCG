#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)42077;
unsigned long long int var_3 = 13663781314848081488ULL;
int var_4 = 878449514;
unsigned long long int var_6 = 16044453011484717983ULL;
int var_8 = -822233817;
unsigned short var_9 = (unsigned short)22529;
unsigned long long int var_11 = 16251884789142563114ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)6512;
unsigned int var_13 = 229888213U;
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
