#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22649;
_Bool var_2 = (_Bool)1;
int var_12 = 1070369524;
short var_17 = (short)10986;
int zero = 0;
unsigned long long int var_20 = 6995408507369307956ULL;
unsigned char var_21 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
