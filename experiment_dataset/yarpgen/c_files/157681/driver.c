#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7889000278844884611LL;
unsigned short var_1 = (unsigned short)28582;
long long int var_3 = 4500281247820595751LL;
long long int var_5 = -2040454591403556861LL;
unsigned short var_6 = (unsigned short)1307;
unsigned long long int var_9 = 3050516389128286381ULL;
int zero = 0;
unsigned long long int var_10 = 6205878601697914820ULL;
long long int var_11 = 1044592691245893924LL;
unsigned short var_12 = (unsigned short)6130;
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
