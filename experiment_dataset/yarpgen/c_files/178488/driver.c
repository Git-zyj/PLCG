#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14333;
unsigned int var_7 = 2657101535U;
unsigned short var_8 = (unsigned short)52540;
unsigned int var_9 = 1432500041U;
int zero = 0;
unsigned int var_12 = 4009099987U;
unsigned char var_13 = (unsigned char)5;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
