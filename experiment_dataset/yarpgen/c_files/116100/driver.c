#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1052936775;
short var_1 = (short)5009;
unsigned long long int var_2 = 12990303340194996665ULL;
short var_3 = (short)21771;
unsigned char var_5 = (unsigned char)10;
_Bool var_6 = (_Bool)0;
long long int var_7 = -6945931957257260161LL;
unsigned char var_8 = (unsigned char)159;
unsigned long long int var_9 = 10730770555145499801ULL;
signed char var_10 = (signed char)-38;
unsigned int var_11 = 4008828109U;
long long int var_12 = -846663105722378090LL;
unsigned long long int var_13 = 7133169869742424443ULL;
int zero = 0;
signed char var_14 = (signed char)-127;
unsigned short var_15 = (unsigned short)29589;
unsigned short var_16 = (unsigned short)62865;
signed char var_17 = (signed char)20;
short var_18 = (short)-8538;
long long int var_19 = -4707789516408139054LL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 595825727491634163ULL;
unsigned short var_23 = (unsigned short)39283;
unsigned int var_24 = 3025049948U;
unsigned char var_25 = (unsigned char)28;
signed char var_26 = (signed char)123;
unsigned short var_27 = (unsigned short)61357;
short var_28 = (short)-28530;
unsigned char var_29 = (unsigned char)64;
long long int var_30 = -8073536577869639166LL;
_Bool var_31 = (_Bool)0;
long long int var_32 = 3182430288426944831LL;
unsigned short var_33 = (unsigned short)56488;
_Bool arr_0 [14] [14] ;
signed char arr_1 [14] ;
signed char arr_4 [14] ;
unsigned int arr_5 [14] ;
unsigned char arr_6 [14] ;
unsigned long long int arr_7 [14] [14] ;
unsigned short arr_8 [14] [14] ;
_Bool arr_12 [14] [14] [14] [14] ;
unsigned long long int arr_14 [14] [14] ;
signed char arr_19 [14] [14] ;
short arr_20 [14] [14] [14] ;
unsigned int arr_25 [18] ;
signed char arr_28 [18] [18] ;
long long int arr_29 [18] [18] [18] [18] ;
long long int arr_35 [18] [18] [18] [18] [18] ;
int arr_36 [18] ;
unsigned int arr_2 [14] ;
unsigned long long int arr_3 [14] ;
short arr_10 [14] ;
unsigned long long int arr_15 [14] [14] [14] ;
short arr_22 [14] [14] [14] [14] ;
short arr_23 [14] ;
unsigned char arr_37 [18] [18] [18] ;
unsigned char arr_38 [18] ;
unsigned short arr_39 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 3164668001U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 10846157028694804193ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)29472 : (unsigned short)28441;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 15401657209470689464ULL : 13203125882612139450ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)67 : (signed char)-51;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (short)9628;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = 2659715582U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)117 : (signed char)-70;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = -5794601420474166072LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = 3983762265528953670LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_36 [i_0] = -732509388;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 226166181U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1229547655053516683ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-16919 : (short)17082;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 9714108171277578223ULL : 3390290856561357063ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-23071 : (short)28236;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = (short)15459;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)254 : (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (unsigned char)81 : (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)55560 : (unsigned short)12821;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
