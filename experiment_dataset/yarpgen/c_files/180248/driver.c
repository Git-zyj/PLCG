#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3520;
int var_2 = -972770828;
unsigned short var_3 = (unsigned short)54451;
long long int var_4 = 3033952526636107989LL;
int var_5 = 1328221275;
long long int var_6 = 7615876288252052376LL;
int var_7 = 1889919864;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1811698257;
long long int var_13 = -7947241808792534681LL;
unsigned short var_14 = (unsigned short)12692;
unsigned char var_15 = (unsigned char)100;
unsigned long long int var_16 = 15239375279243964199ULL;
unsigned char arr_0 [25] ;
long long int arr_3 [12] ;
_Bool arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 5659077403098114170LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
