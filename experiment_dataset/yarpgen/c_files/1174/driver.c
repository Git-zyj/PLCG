#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25642;
long long int var_2 = 137250750940985609LL;
long long int var_3 = 962070175719480166LL;
short var_4 = (short)-19248;
unsigned int var_5 = 690021839U;
long long int var_8 = -7737838859131714162LL;
long long int var_9 = 1872274378144761296LL;
unsigned int var_11 = 1208752371U;
unsigned char var_13 = (unsigned char)212;
unsigned char var_14 = (unsigned char)169;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1840875136U;
short var_19 = (short)-21168;
unsigned int var_20 = 425367743U;
unsigned char var_21 = (unsigned char)56;
unsigned int var_22 = 3289496807U;
unsigned long long int var_23 = 15840285612872775729ULL;
unsigned long long int var_24 = 16088796402347913835ULL;
unsigned short arr_0 [14] ;
short arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)34984;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)1843;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
