#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4822498087029904413ULL;
unsigned int var_4 = 974360354U;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 2772357909U;
unsigned long long int var_10 = 6254249689934011141ULL;
long long int var_11 = 8909401557405274066LL;
long long int var_12 = -5637311259397037212LL;
unsigned char var_14 = (unsigned char)228;
long long int var_15 = 7940977220678881953LL;
int zero = 0;
unsigned long long int var_16 = 15485954455280662069ULL;
unsigned int var_17 = 2015502938U;
unsigned char var_18 = (unsigned char)252;
long long int var_19 = 8638630390685288288LL;
unsigned char var_20 = (unsigned char)85;
unsigned int var_21 = 2127331534U;
int var_22 = 1074522084;
short var_23 = (short)-18909;
unsigned long long int var_24 = 7476506449022186658ULL;
long long int var_25 = 7649822564226197238LL;
unsigned long long int var_26 = 8990553457630821613ULL;
unsigned long long int var_27 = 4167293840766423050ULL;
unsigned int var_28 = 259708492U;
_Bool var_29 = (_Bool)0;
short var_30 = (short)5364;
signed char arr_1 [20] ;
short arr_3 [17] ;
int arr_4 [17] ;
_Bool arr_6 [17] ;
long long int arr_8 [17] ;
_Bool arr_16 [17] [17] ;
long long int arr_21 [17] [17] [17] ;
unsigned long long int arr_2 [20] ;
_Bool arr_7 [17] ;
unsigned int arr_24 [17] [17] [17] [17] ;
long long int arr_25 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)17365;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -981655;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -2714671967870011320LL : -7308942702142853223LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1796275100481050019LL : 4162558203586954178LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 6145460869786684379ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2201969109U : 4163024172U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = -4778056039507679768LL;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
