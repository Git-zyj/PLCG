#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1007478870914180246ULL;
signed char var_2 = (signed char)-43;
long long int var_5 = -7583997129657221513LL;
unsigned short var_7 = (unsigned short)50798;
unsigned long long int var_8 = 11405762367547044923ULL;
long long int var_9 = 8389852880423431417LL;
int var_10 = 131544169;
long long int var_11 = -2340968271505022443LL;
int zero = 0;
signed char var_15 = (signed char)54;
unsigned short var_16 = (unsigned short)39974;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
