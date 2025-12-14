#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)13718;
unsigned short var_5 = (unsigned short)36353;
long long int var_6 = 2232556895830137563LL;
long long int var_7 = 4098952501090755889LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_10 = -2062125155;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)12400;
int var_13 = -1801231508;
unsigned char var_14 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
