#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)160;
int var_11 = -695706837;
unsigned int var_13 = 2766759914U;
int zero = 0;
unsigned short var_15 = (unsigned short)21753;
unsigned int var_16 = 515400525U;
unsigned short var_17 = (unsigned short)46093;
unsigned short var_18 = (unsigned short)45363;
long long int var_19 = 1889466858297417010LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
