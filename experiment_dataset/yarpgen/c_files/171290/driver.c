#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)132;
long long int var_5 = 6871680664270753242LL;
unsigned short var_9 = (unsigned short)50530;
int zero = 0;
unsigned char var_11 = (unsigned char)199;
int var_12 = -586571648;
unsigned long long int var_13 = 1236896239662258234ULL;
unsigned short var_14 = (unsigned short)7376;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
