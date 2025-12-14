#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1727788123193150763LL;
signed char var_2 = (signed char)50;
int var_5 = 1802249246;
signed char var_10 = (signed char)29;
int zero = 0;
unsigned short var_13 = (unsigned short)34063;
long long int var_14 = 5017406883537218664LL;
void init() {
}

void checksum() {
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
