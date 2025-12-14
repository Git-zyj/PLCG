#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 547066612;
int var_7 = -2032990921;
int var_11 = -1573503157;
unsigned int var_13 = 3245201247U;
unsigned short var_18 = (unsigned short)13510;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6907261570185175938LL;
int var_21 = 1418800631;
unsigned char var_22 = (unsigned char)175;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
