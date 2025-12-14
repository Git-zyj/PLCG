#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46225;
short var_8 = (short)26956;
int var_9 = -555605619;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)4;
unsigned int var_15 = 2470514302U;
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
