#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 1743859133U;
unsigned int var_6 = 2182574266U;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)21;
unsigned short var_17 = (unsigned short)27571;
int zero = 0;
unsigned long long int var_19 = 12129329442875328723ULL;
unsigned short var_20 = (unsigned short)23421;
unsigned int var_21 = 3378337293U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
