#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37344;
unsigned long long int var_1 = 1271871652609155073ULL;
short var_2 = (short)10318;
long long int var_3 = -3523574887550748631LL;
unsigned int var_4 = 4058632356U;
_Bool var_5 = (_Bool)0;
int var_6 = -1607122912;
unsigned short var_7 = (unsigned short)8446;
unsigned long long int var_8 = 2747788446527214392ULL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -2817346772647994915LL;
unsigned int var_11 = 2874888485U;
unsigned int var_12 = 2350639304U;
unsigned long long int var_13 = 15409708333427738172ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)6300;
unsigned long long int var_15 = 3488915224029758578ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)1745;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-103;
unsigned int var_20 = 2313124806U;
long long int var_21 = 8611710133347546589LL;
signed char var_22 = (signed char)-3;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)10334;
_Bool var_26 = (_Bool)1;
short arr_0 [14] ;
unsigned short arr_1 [14] ;
_Bool arr_2 [14] [14] ;
unsigned int arr_5 [14] ;
signed char arr_6 [14] ;
long long int arr_8 [14] [14] ;
unsigned long long int arr_9 [14] [14] [14] ;
long long int arr_14 [17] ;
long long int arr_15 [17] ;
unsigned int arr_11 [14] [14] [14] [14] ;
signed char arr_12 [14] ;
unsigned long long int arr_13 [14] ;
unsigned long long int arr_16 [17] ;
unsigned short arr_19 [12] ;
_Bool arr_20 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)28270;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)53804;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 2925285381U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 409205017690681264LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1099576555516545161ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = -876564637869005864LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = 7749733703553170359LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 3106294931U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 18224670605912225859ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 7552960379978111726ULL : 11917152857138271304ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36681 : (unsigned short)50251;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
