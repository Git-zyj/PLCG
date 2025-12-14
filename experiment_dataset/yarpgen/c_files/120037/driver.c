#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
int var_1 = -1376047810;
int var_4 = -2049292983;
long long int var_5 = 3899822370823842213LL;
unsigned int var_7 = 2789383030U;
unsigned long long int var_8 = 17820164490431185092ULL;
unsigned short var_9 = (unsigned short)43101;
unsigned int var_10 = 3569343458U;
int zero = 0;
unsigned char var_12 = (unsigned char)237;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3765668019U;
unsigned long long int var_15 = 2108498082220835660ULL;
unsigned short var_16 = (unsigned short)10184;
signed char var_17 = (signed char)37;
unsigned int var_18 = 846356713U;
_Bool var_19 = (_Bool)0;
int var_20 = 543802431;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)81;
_Bool arr_0 [19] ;
unsigned char arr_1 [19] ;
unsigned short arr_2 [25] [25] ;
long long int arr_3 [25] ;
short arr_4 [25] [25] ;
int arr_7 [25] ;
signed char arr_8 [25] [25] [25] ;
signed char arr_6 [25] ;
int arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)9678;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -2676689192615987689LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-23724;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -289825912;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)26 : (signed char)-54;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 383829625;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
