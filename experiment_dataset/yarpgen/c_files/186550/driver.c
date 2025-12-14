#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8436079101050072153ULL;
unsigned char var_2 = (unsigned char)207;
unsigned long long int var_3 = 10959446913506888532ULL;
int zero = 0;
int var_10 = 281555392;
unsigned char var_11 = (unsigned char)192;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3165712233U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
