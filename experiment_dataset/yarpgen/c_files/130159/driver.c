#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)58;
unsigned long long int var_11 = 14913250809004058785ULL;
unsigned char var_12 = (unsigned char)158;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_17 = -467155101;
unsigned short var_18 = (unsigned short)64828;
signed char var_19 = (signed char)20;
signed char var_20 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
