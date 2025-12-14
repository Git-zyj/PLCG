#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1496058866;
int var_2 = -942806881;
long long int var_3 = -4802351369085858322LL;
unsigned long long int var_4 = 4205111694123391438ULL;
unsigned int var_5 = 1643574888U;
long long int var_7 = -1017118929823138146LL;
int var_8 = 1565509264;
unsigned int var_9 = 2781990151U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)42820;
unsigned int var_13 = 1952869290U;
long long int var_14 = 9152006886835275615LL;
unsigned short var_15 = (unsigned short)32523;
unsigned char var_16 = (unsigned char)126;
int zero = 0;
short var_17 = (short)31860;
unsigned long long int var_18 = 3194373043013216629ULL;
int var_19 = -261945578;
unsigned long long int var_20 = 4627662135545617552ULL;
unsigned int var_21 = 3622239591U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
