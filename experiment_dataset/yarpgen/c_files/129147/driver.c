#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-95;
unsigned short var_7 = (unsigned short)14846;
unsigned long long int var_12 = 16276015541828923146ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)13530;
unsigned long long int var_16 = 11093518721478640229ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
