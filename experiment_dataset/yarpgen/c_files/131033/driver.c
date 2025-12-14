#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -381833029;
unsigned int var_2 = 1882606289U;
unsigned char var_5 = (unsigned char)198;
int var_11 = 487455016;
int zero = 0;
short var_12 = (short)17723;
long long int var_13 = 8609605627475452776LL;
int var_14 = -1674448467;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
