#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -391752896;
unsigned short var_4 = (unsigned short)29202;
unsigned short var_9 = (unsigned short)20679;
signed char var_10 = (signed char)-119;
int var_11 = 590787703;
unsigned int var_14 = 1890617283U;
int zero = 0;
long long int var_15 = -6336538973604668000LL;
unsigned char var_16 = (unsigned char)16;
unsigned char var_17 = (unsigned char)11;
unsigned char var_18 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
