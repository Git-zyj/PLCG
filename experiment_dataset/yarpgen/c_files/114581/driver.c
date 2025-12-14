#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)21202;
unsigned char var_7 = (unsigned char)188;
unsigned int var_8 = 1707086530U;
_Bool var_10 = (_Bool)1;
int var_11 = 1165845256;
int zero = 0;
unsigned int var_18 = 3122221454U;
unsigned int var_19 = 3143253292U;
int var_20 = 2054153685;
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
