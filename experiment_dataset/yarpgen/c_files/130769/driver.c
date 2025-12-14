#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
long long int var_2 = 8828589210631163375LL;
short var_3 = (short)6660;
unsigned int var_4 = 3597026441U;
unsigned char var_7 = (unsigned char)7;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)102;
unsigned short var_10 = (unsigned short)61474;
unsigned char var_11 = (unsigned char)25;
int zero = 0;
unsigned short var_12 = (unsigned short)36820;
long long int var_13 = -1983152873302491910LL;
unsigned long long int var_14 = 14084329195857226717ULL;
unsigned short var_15 = (unsigned short)557;
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
