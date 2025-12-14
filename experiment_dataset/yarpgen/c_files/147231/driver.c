#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6269665304732025225ULL;
signed char var_2 = (signed char)-122;
signed char var_5 = (signed char)-47;
signed char var_6 = (signed char)-5;
long long int var_10 = 4863188841585713440LL;
int zero = 0;
unsigned char var_14 = (unsigned char)223;
long long int var_15 = -8216028690590050916LL;
signed char var_16 = (signed char)-98;
signed char var_17 = (signed char)-110;
int var_18 = -1434593601;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
