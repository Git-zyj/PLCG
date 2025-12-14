#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62418;
unsigned int var_2 = 1542678305U;
unsigned short var_3 = (unsigned short)56181;
signed char var_7 = (signed char)9;
unsigned short var_8 = (unsigned short)60778;
int zero = 0;
unsigned long long int var_10 = 13982464608406988189ULL;
unsigned long long int var_11 = 5223766455152531472ULL;
long long int var_12 = 6939954658597336880LL;
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
