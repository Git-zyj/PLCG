#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7800489987743735657ULL;
_Bool var_7 = (_Bool)1;
short var_10 = (short)31674;
long long int var_12 = 2361825451367550225LL;
unsigned long long int var_13 = 6965877451783621018ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -1077298991429896775LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)126;
unsigned long long int var_18 = 7135387859626359574ULL;
long long int var_19 = 6976239652929737804LL;
int var_20 = 2067984116;
int var_21 = -137237868;
int var_22 = 641797344;
long long int var_23 = 7065268984581297978LL;
long long int arr_1 [22] [22] ;
int arr_2 [22] [22] ;
int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 4933485411196518202LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 629571968;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -128569516;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
