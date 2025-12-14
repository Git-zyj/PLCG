#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6832982031656432061LL;
unsigned long long int var_1 = 8315450911964012206ULL;
long long int var_2 = 2436459669489064907LL;
long long int var_3 = -4276354219766261961LL;
long long int var_5 = 4526564671496113502LL;
_Bool var_6 = (_Bool)0;
long long int var_12 = -4461506429591052928LL;
short var_13 = (short)-23345;
int zero = 0;
unsigned char var_16 = (unsigned char)254;
short var_17 = (short)10860;
unsigned char var_18 = (unsigned char)208;
unsigned short var_19 = (unsigned short)11052;
unsigned long long int var_20 = 10093736448624299137ULL;
unsigned short var_21 = (unsigned short)64650;
unsigned long long int arr_0 [18] ;
unsigned short arr_1 [18] ;
short arr_2 [18] [18] ;
unsigned short arr_3 [18] ;
signed char arr_4 [18] [18] ;
unsigned long long int arr_5 [18] [18] ;
unsigned short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 11422458136769718778ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)5159;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)29645;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)60760;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 16326197863201277880ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)60447;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
