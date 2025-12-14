#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 968258274;
long long int var_3 = 1057326871228828975LL;
long long int var_4 = -2533612271359534545LL;
int var_5 = 1610171610;
long long int var_7 = 1893939010458071596LL;
unsigned int var_9 = 2869291536U;
unsigned short var_10 = (unsigned short)33963;
unsigned short var_11 = (unsigned short)12975;
unsigned long long int var_12 = 10058892992242629128ULL;
_Bool var_13 = (_Bool)0;
long long int var_15 = 5076584078992171435LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)117;
short var_21 = (short)2075;
unsigned long long int var_22 = 11631231498755266263ULL;
unsigned char var_23 = (unsigned char)16;
unsigned short var_24 = (unsigned short)56339;
unsigned int var_25 = 3549979103U;
long long int var_26 = -4146109522878418334LL;
unsigned int var_27 = 3471815198U;
_Bool var_28 = (_Bool)0;
short var_29 = (short)-9580;
short var_30 = (short)15683;
unsigned int var_31 = 6799132U;
unsigned int var_32 = 3432073948U;
unsigned short var_33 = (unsigned short)48588;
unsigned char var_34 = (unsigned char)71;
long long int var_35 = -7097264841022606930LL;
_Bool var_36 = (_Bool)1;
short var_37 = (short)7812;
unsigned short var_38 = (unsigned short)3852;
unsigned char var_39 = (unsigned char)172;
short var_40 = (short)9397;
long long int var_41 = 2705843628858109840LL;
_Bool var_42 = (_Bool)0;
signed char var_43 = (signed char)-33;
unsigned int var_44 = 2929938999U;
unsigned int var_45 = 2126452890U;
_Bool var_46 = (_Bool)0;
unsigned short arr_1 [17] ;
unsigned int arr_4 [17] ;
long long int arr_6 [17] ;
unsigned short arr_8 [17] [17] [17] [17] ;
short arr_11 [17] ;
long long int arr_16 [17] [17] ;
long long int arr_26 [17] [17] [17] ;
long long int arr_17 [17] ;
int arr_18 [17] ;
unsigned short arr_19 [17] [17] [17] [17] ;
unsigned int arr_22 [17] ;
long long int arr_23 [17] ;
unsigned long long int arr_34 [17] [17] [17] ;
unsigned int arr_44 [17] [17] [17] [17] [17] [17] ;
long long int arr_45 [17] [17] [17] [17] [17] [17] ;
unsigned int arr_53 [17] [17] [17] [17] ;
signed char arr_54 [17] ;
unsigned short arr_55 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)31895;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2639186368U : 1713536245U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 5933078827351872806LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)14937;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (short)16509;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = -4117908461968414580LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = -4353551729207771778LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? -6898616266724597605LL : -4381263608183311080LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -1410436082 : -1400672866;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)416 : (unsigned short)41074;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 368015029U : 1501699887U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? -5947246013510559306LL : 7906466239563275887LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 9225704265995578780ULL : 17084280735399848856ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 2292940898U : 1246976270U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 2319026841431363501LL : -7016466857792099983LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2640031598U : 3062941259U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_54 [i_0] = (i_0 % 2 == 0) ? (signed char)-1 : (signed char)-35;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)34230 : (unsigned short)30682;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_53 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_55 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
