#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1245195852;
_Bool var_4 = (_Bool)1;
unsigned short var_9 = (unsigned short)1775;
unsigned int var_11 = 3082635133U;
int zero = 0;
unsigned char var_15 = (unsigned char)111;
unsigned int var_16 = 898387363U;
unsigned char var_17 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
