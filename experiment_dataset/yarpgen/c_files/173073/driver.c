#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7459279579259942586LL;
unsigned long long int var_1 = 11529938231234004137ULL;
unsigned char var_2 = (unsigned char)51;
long long int var_7 = -7156370296694903292LL;
int var_10 = -1999953094;
unsigned int var_11 = 2581415896U;
int var_14 = -386527594;
int var_15 = 723101430;
int zero = 0;
unsigned char var_16 = (unsigned char)181;
int var_17 = 1684052606;
unsigned char var_18 = (unsigned char)212;
void init() {
}

void checksum() {
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
