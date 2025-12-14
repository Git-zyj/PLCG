#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -253521019;
unsigned long long int var_1 = 4474727373502249653ULL;
unsigned long long int var_3 = 17901449588667994045ULL;
unsigned char var_5 = (unsigned char)144;
int zero = 0;
unsigned char var_10 = (unsigned char)66;
unsigned short var_11 = (unsigned short)50408;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
