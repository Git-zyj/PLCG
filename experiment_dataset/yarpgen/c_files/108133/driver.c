#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2978515500U;
unsigned char var_6 = (unsigned char)159;
unsigned int var_10 = 2732616948U;
unsigned int var_12 = 883176834U;
unsigned char var_16 = (unsigned char)173;
signed char var_18 = (signed char)-47;
int zero = 0;
unsigned long long int var_20 = 14426716992780480546ULL;
int var_21 = 29517999;
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
