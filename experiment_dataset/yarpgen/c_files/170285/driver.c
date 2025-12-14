#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41886;
unsigned long long int var_1 = 9288157928209451495ULL;
unsigned long long int var_2 = 4660402578172293470ULL;
unsigned long long int var_3 = 11550931183220656756ULL;
unsigned short var_4 = (unsigned short)28790;
unsigned long long int var_5 = 10460110845014693106ULL;
unsigned short var_6 = (unsigned short)41009;
_Bool var_8 = (_Bool)0;
int var_9 = -327497719;
int var_10 = -1087925113;
int var_11 = -550722865;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -926664617;
int var_14 = -1997356102;
int var_15 = 791364004;
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
