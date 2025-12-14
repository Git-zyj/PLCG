#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3524513075U;
unsigned char var_1 = (unsigned char)225;
long long int var_2 = -1178230500763622996LL;
unsigned int var_4 = 2443039553U;
unsigned int var_6 = 1016847022U;
unsigned short var_7 = (unsigned short)36964;
int var_10 = 1566395069;
unsigned long long int var_12 = 7162831199467371519ULL;
unsigned long long int var_13 = 5385293397297966412ULL;
unsigned int var_15 = 2009339616U;
unsigned char var_16 = (unsigned char)190;
int zero = 0;
unsigned short var_17 = (unsigned short)49700;
unsigned short var_18 = (unsigned short)36786;
long long int var_19 = 3088872149348830317LL;
signed char var_20 = (signed char)111;
long long int var_21 = 4144728818900016560LL;
_Bool arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
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
