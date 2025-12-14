#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -582479758;
unsigned short var_2 = (unsigned short)2707;
unsigned long long int var_3 = 532845071929057165ULL;
_Bool var_5 = (_Bool)0;
long long int var_6 = 1069895902857615789LL;
unsigned long long int var_9 = 17449549862836555621ULL;
unsigned long long int var_11 = 18335752834692559509ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 1116492961;
void init() {
}

void checksum() {
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
