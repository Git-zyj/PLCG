#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2692380279153404268LL;
int var_1 = 572093530;
unsigned int var_2 = 998262875U;
long long int var_3 = 8788950553819115130LL;
unsigned short var_4 = (unsigned short)15407;
long long int var_5 = -923965090521305903LL;
unsigned short var_6 = (unsigned short)15012;
unsigned long long int var_7 = 15664166253972411224ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 904781531U;
int var_10 = 91400467;
unsigned char var_11 = (unsigned char)240;
long long int var_12 = -2491494237780619227LL;
int zero = 0;
long long int var_13 = -5906954968186061903LL;
unsigned long long int var_14 = 18032723735228646664ULL;
unsigned long long int var_15 = 10733961029079054123ULL;
int var_16 = -784579264;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int var_19 = 592335775;
long long int var_20 = 6967752282587657301LL;
unsigned int var_21 = 1508114689U;
long long int var_22 = -1953498412754709400LL;
unsigned char var_23 = (unsigned char)161;
_Bool var_24 = (_Bool)0;
int var_25 = 194003954;
unsigned char var_26 = (unsigned char)123;
long long int var_27 = -398190105295712113LL;
unsigned long long int var_28 = 9850836550108256013ULL;
unsigned int var_29 = 1468073965U;
int var_30 = 398715508;
unsigned long long int var_31 = 2904005104651270019ULL;
int var_32 = 1846327931;
unsigned short var_33 = (unsigned short)877;
int var_34 = 127217557;
unsigned char var_35 = (unsigned char)237;
long long int var_36 = 5922505920296918510LL;
long long int var_37 = -1759831545504520285LL;
int var_38 = -1047592816;
unsigned int var_39 = 3999635028U;
int var_40 = 1318080541;
unsigned long long int arr_15 [13] ;
long long int arr_20 [13] [13] ;
int arr_27 [13] ;
unsigned long long int arr_28 [13] [13] [13] [13] ;
unsigned long long int arr_32 [13] [13] ;
unsigned char arr_38 [13] [13] [13] ;
short arr_42 [13] [13] [13] [13] ;
unsigned long long int arr_43 [13] [13] ;
short arr_44 [13] [13] ;
short arr_45 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 12947776630104547532ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_20 [i_0] [i_1] = 2893792102728380227LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_27 [i_0] = -1994445261;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 13604808818194259239ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_32 [i_0] [i_1] = 613517731438012418ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)30712 : (short)14892;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_43 [i_0] [i_1] = (i_1 % 2 == 0) ? 1168648335044795495ULL : 11972310805929185180ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_44 [i_0] [i_1] = (short)32616;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_45 [i_0] = (short)13327;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
