#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)4256;
unsigned short var_13 = (unsigned short)42883;
unsigned char var_14 = (unsigned char)203;
int zero = 0;
unsigned long long int var_17 = 12606438806995347691ULL;
int var_18 = -234929099;
signed char var_19 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
