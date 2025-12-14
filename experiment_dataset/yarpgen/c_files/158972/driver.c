#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3589327810U;
signed char var_6 = (signed char)-40;
unsigned long long int var_9 = 4682330016660457850ULL;
unsigned long long int var_10 = 14820344858343801093ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)53138;
unsigned long long int var_12 = 6296274055644493867ULL;
unsigned char var_13 = (unsigned char)97;
unsigned char var_14 = (unsigned char)129;
unsigned int var_15 = 68836448U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
