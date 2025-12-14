#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3593634133007488579LL;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)12;
unsigned short var_4 = (unsigned short)43343;
unsigned int var_5 = 3188213421U;
unsigned long long int var_6 = 9744533928279417953ULL;
signed char var_7 = (signed char)103;
int var_8 = -662267395;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-48;
unsigned int var_12 = 3601322693U;
int var_14 = -1860406789;
int var_15 = -1617878909;
unsigned char var_17 = (unsigned char)184;
int var_18 = -1552712183;
int zero = 0;
long long int var_19 = 1428807545359467579LL;
unsigned int var_20 = 1275929588U;
signed char var_21 = (signed char)-1;
void init() {
}

void checksum() {
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
