#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2508634387U;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)191;
unsigned long long int var_3 = 10597909207070647758ULL;
unsigned char var_4 = (unsigned char)61;
unsigned int var_5 = 3304968250U;
unsigned char var_6 = (unsigned char)103;
unsigned int var_7 = 2874545547U;
int zero = 0;
long long int var_12 = 8819324728467119145LL;
unsigned short var_13 = (unsigned short)43243;
unsigned char var_14 = (unsigned char)82;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
