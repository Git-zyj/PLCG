#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2033772459;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 8091618893405345497ULL;
short var_7 = (short)15372;
unsigned int var_9 = 3730538844U;
int var_10 = -1809615235;
int var_11 = -41279110;
unsigned short var_13 = (unsigned short)54027;
int zero = 0;
unsigned short var_19 = (unsigned short)20993;
short var_20 = (short)-32112;
unsigned long long int var_21 = 14985938066654819929ULL;
unsigned short var_22 = (unsigned short)13792;
long long int var_23 = 2164747414493617639LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
