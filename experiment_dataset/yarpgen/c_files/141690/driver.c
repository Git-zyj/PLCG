#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5447427751801710800ULL;
unsigned long long int var_5 = 1501046801002147780ULL;
unsigned char var_9 = (unsigned char)149;
unsigned short var_10 = (unsigned short)36655;
unsigned short var_11 = (unsigned short)60129;
unsigned short var_15 = (unsigned short)3215;
unsigned short var_16 = (unsigned short)50653;
int zero = 0;
unsigned char var_17 = (unsigned char)99;
unsigned long long int var_18 = 6091273749149926141ULL;
int var_19 = 695313744;
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
