#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1429709157;
unsigned short var_2 = (unsigned short)34016;
long long int var_3 = 3760032134319488193LL;
int var_4 = 699806706;
short var_5 = (short)-10297;
int var_6 = 1838744617;
signed char var_8 = (signed char)111;
int var_10 = -1721199509;
unsigned int var_11 = 1369268739U;
int zero = 0;
long long int var_12 = -2909759303496169895LL;
unsigned long long int var_13 = 11223082812218966219ULL;
signed char var_14 = (signed char)59;
long long int var_15 = 6705340992938990272LL;
unsigned char var_16 = (unsigned char)49;
unsigned short var_17 = (unsigned short)14000;
unsigned short var_18 = (unsigned short)20962;
long long int var_19 = -3947104722685000047LL;
int var_20 = 1026366318;
int arr_1 [14] ;
unsigned char arr_2 [14] ;
long long int arr_4 [14] [14] ;
unsigned int arr_5 [14] [14] ;
short arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1042227450;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 5610687008105313622LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 4240297810U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (short)-14903;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
