#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16722;
unsigned char var_2 = (unsigned char)62;
signed char var_10 = (signed char)-7;
int zero = 0;
short var_16 = (short)9108;
unsigned int var_17 = 3062785788U;
unsigned int var_18 = 3711382594U;
unsigned char var_19 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
