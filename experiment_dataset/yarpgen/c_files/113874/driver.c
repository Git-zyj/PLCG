#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)22294;
long long int var_2 = -1178455093516758778LL;
unsigned int var_3 = 3051657489U;
unsigned short var_4 = (unsigned short)44000;
long long int var_5 = -2197546410611351858LL;
unsigned long long int var_6 = 2673547682047113171ULL;
unsigned short var_7 = (unsigned short)12902;
short var_8 = (short)4421;
unsigned int var_9 = 1166745536U;
unsigned long long int var_10 = 16380487327663794707ULL;
unsigned int var_12 = 3117727711U;
signed char var_13 = (signed char)-104;
unsigned int var_14 = 3148079981U;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -2808528306880276120LL;
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
