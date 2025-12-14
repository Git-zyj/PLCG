#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
unsigned char var_1 = (unsigned char)234;
short var_2 = (short)-23668;
long long int var_3 = 9042233123979457625LL;
long long int var_4 = 6760787248046349326LL;
unsigned char var_5 = (unsigned char)204;
unsigned char var_7 = (unsigned char)221;
short var_8 = (short)3465;
long long int var_9 = 622810986622381604LL;
unsigned char var_10 = (unsigned char)179;
int zero = 0;
long long int var_11 = -2893978768063980900LL;
long long int var_12 = 1591737733511609750LL;
long long int var_13 = 3031638460102046425LL;
long long int var_14 = -130014977342708001LL;
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
