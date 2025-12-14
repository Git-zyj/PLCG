#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 29432258U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 2747085066201461868ULL;
long long int var_4 = -5969450523675008522LL;
unsigned int var_5 = 1963700930U;
long long int var_6 = 5447689954027796765LL;
signed char var_7 = (signed char)28;
unsigned short var_8 = (unsigned short)8842;
long long int var_9 = 8082727555395632916LL;
unsigned long long int var_10 = 3551252233667604459ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4121645324U;
unsigned int var_13 = 2563000366U;
void init() {
}

void checksum() {
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
