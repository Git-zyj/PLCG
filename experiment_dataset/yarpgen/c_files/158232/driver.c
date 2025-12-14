#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)206;
unsigned long long int var_8 = 1342294354358923742ULL;
int zero = 0;
unsigned long long int var_10 = 14155504217451892559ULL;
unsigned char var_11 = (unsigned char)242;
unsigned long long int var_12 = 2757776731385727392ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
