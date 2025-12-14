#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7943067386995539438ULL;
int var_5 = 746570595;
unsigned int var_7 = 472575751U;
unsigned char var_8 = (unsigned char)213;
unsigned short var_9 = (unsigned short)39325;
int zero = 0;
unsigned char var_10 = (unsigned char)85;
long long int var_11 = -7282619936436563752LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 4997936387433562426ULL;
long long int arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 7660524933712490482LL : 4652880368461228884LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
