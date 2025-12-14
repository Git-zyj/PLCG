#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8011;
unsigned long long int var_3 = 6883539388168414274ULL;
unsigned int var_7 = 767587772U;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3043558951U;
unsigned int var_13 = 3488530465U;
long long int var_14 = -1561791921394939371LL;
int zero = 0;
unsigned short var_15 = (unsigned short)40126;
long long int var_16 = 8427914008961439539LL;
unsigned short var_17 = (unsigned short)37179;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
