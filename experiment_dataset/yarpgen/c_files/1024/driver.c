#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11945817557642988848ULL;
unsigned long long int var_6 = 7664974481367748582ULL;
unsigned short var_7 = (unsigned short)17315;
int var_8 = 613465753;
int zero = 0;
unsigned long long int var_11 = 1820960655571112250ULL;
unsigned short var_12 = (unsigned short)40359;
unsigned long long int var_13 = 3221283960068717804ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
