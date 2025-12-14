#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)216;
int var_6 = -398703949;
unsigned long long int var_7 = 14823318318884796192ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)96;
unsigned short var_11 = (unsigned short)60089;
unsigned short var_12 = (unsigned short)27992;
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
