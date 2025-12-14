#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
unsigned char var_2 = (unsigned char)34;
long long int var_3 = 8286657658899087735LL;
long long int var_7 = 1451369258839202829LL;
unsigned char var_10 = (unsigned char)49;
int zero = 0;
int var_11 = -575853414;
long long int var_12 = 3898291641442201477LL;
void init() {
}

void checksum() {
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
