#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)205;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)224;
int var_14 = 1829557312;
int zero = 0;
unsigned short var_15 = (unsigned short)32236;
unsigned char var_16 = (unsigned char)209;
unsigned int var_17 = 1504191742U;
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
