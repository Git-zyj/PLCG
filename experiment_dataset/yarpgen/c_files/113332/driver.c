#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4080912915U;
long long int var_1 = 6122666343312689494LL;
unsigned long long int var_2 = 15287405303215589490ULL;
unsigned int var_3 = 4157545996U;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2478193091U;
unsigned short var_9 = (unsigned short)59151;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -1311509809;
unsigned long long int var_15 = 3207220336730136335ULL;
signed char var_16 = (signed char)-11;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2190296223U;
long long int var_19 = 7761004304505751144LL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11017336862251064790ULL;
short var_22 = (short)-16241;
int var_23 = -45132205;
unsigned int var_24 = 2013443670U;
unsigned int var_25 = 1851494975U;
unsigned long long int arr_3 [13] [13] ;
signed char arr_4 [13] [13] ;
unsigned short arr_15 [13] [13] [13] [13] ;
int arr_18 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 13810748583310585258ULL : 547951987988114144ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)60137 : (unsigned short)12658;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? -1812147290 : -1791857239;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
