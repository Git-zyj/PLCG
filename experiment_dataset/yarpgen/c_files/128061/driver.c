#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)161;
unsigned short var_5 = (unsigned short)58261;
unsigned long long int var_8 = 14366572697054749583ULL;
unsigned char var_10 = (unsigned char)21;
int zero = 0;
unsigned long long int var_12 = 11671891291029213854ULL;
int var_13 = -1285867974;
signed char var_14 = (signed char)-42;
unsigned int var_15 = 51828989U;
void init() {
}

void checksum() {
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
