#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 509360691;
int var_1 = -1271915487;
int var_5 = -661596298;
unsigned long long int var_6 = 915017418656301503ULL;
unsigned long long int var_7 = 15502282648658383859ULL;
_Bool var_8 = (_Bool)1;
int var_9 = 157113467;
int var_11 = -1858728772;
unsigned char var_13 = (unsigned char)15;
unsigned long long int var_16 = 16393960534995576145ULL;
int zero = 0;
int var_18 = -1669992037;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
