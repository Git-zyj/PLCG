#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
unsigned char var_2 = (unsigned char)210;
unsigned char var_3 = (unsigned char)101;
long long int var_8 = -2432654367093290333LL;
unsigned char var_9 = (unsigned char)144;
int zero = 0;
long long int var_10 = 4160161859079928667LL;
long long int var_11 = -2772533089137816185LL;
long long int var_12 = 3030264947061317322LL;
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
