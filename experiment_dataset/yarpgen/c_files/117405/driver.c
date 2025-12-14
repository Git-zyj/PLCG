#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23551;
unsigned char var_2 = (unsigned char)66;
int var_3 = -1254862727;
unsigned char var_4 = (unsigned char)60;
long long int var_6 = 4106983698200614827LL;
short var_7 = (short)22459;
unsigned char var_8 = (unsigned char)165;
short var_9 = (short)-13300;
signed char var_11 = (signed char)-126;
int var_12 = -1372682381;
int var_13 = -1848957275;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2201994050U;
unsigned short var_20 = (unsigned short)39680;
int var_21 = -1681915305;
long long int var_22 = 515650724793870368LL;
short var_23 = (short)5040;
signed char arr_1 [19] ;
long long int arr_2 [19] ;
int arr_3 [19] [19] [19] ;
int arr_6 [19] ;
signed char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 5396370104702187369LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1097126458;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 586391426;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (signed char)-103;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
