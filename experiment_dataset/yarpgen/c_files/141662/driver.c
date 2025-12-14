#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2078778418;
signed char var_5 = (signed char)80;
unsigned char var_6 = (unsigned char)23;
unsigned char var_7 = (unsigned char)172;
long long int var_12 = -4015567246791306830LL;
unsigned long long int var_13 = 15227988945655307206ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)67;
unsigned long long int var_15 = 3918344225063727428ULL;
unsigned int var_16 = 602080703U;
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
