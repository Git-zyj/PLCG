#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -203910256;
unsigned char var_2 = (unsigned char)207;
long long int var_10 = -4355821235127026279LL;
unsigned long long int var_11 = 18327059172010522276ULL;
int zero = 0;
int var_13 = -192669594;
unsigned short var_14 = (unsigned short)2633;
void init() {
}

void checksum() {
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
