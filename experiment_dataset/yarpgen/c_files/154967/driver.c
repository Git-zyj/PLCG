#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
unsigned short var_3 = (unsigned short)53593;
unsigned int var_4 = 4255091881U;
unsigned int var_6 = 1682188952U;
unsigned int var_9 = 1092609093U;
int zero = 0;
int var_14 = 1182748538;
signed char var_15 = (signed char)-65;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
