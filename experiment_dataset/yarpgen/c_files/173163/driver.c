#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-14;
int var_3 = 195180808;
int var_4 = 156097656;
unsigned short var_5 = (unsigned short)39958;
signed char var_7 = (signed char)76;
int var_9 = 1523986581;
signed char var_10 = (signed char)62;
unsigned short var_11 = (unsigned short)40249;
unsigned int var_12 = 2992330306U;
int zero = 0;
long long int var_13 = 6604397329856650212LL;
int var_14 = -1315580037;
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
