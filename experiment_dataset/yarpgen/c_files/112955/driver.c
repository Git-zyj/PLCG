#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)10;
unsigned int var_12 = 39918856U;
unsigned int var_16 = 494684455U;
unsigned int var_18 = 445555529U;
int zero = 0;
long long int var_19 = 2006891002900226315LL;
unsigned char var_20 = (unsigned char)216;
int var_21 = -1578938889;
unsigned int var_22 = 3070458855U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
