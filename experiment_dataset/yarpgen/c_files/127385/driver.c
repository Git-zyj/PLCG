#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)75;
long long int var_2 = 9165495813129638111LL;
signed char var_3 = (signed char)-11;
signed char var_4 = (signed char)75;
long long int var_5 = -3493422660684716478LL;
unsigned long long int var_6 = 10724681766648789503ULL;
unsigned long long int var_7 = 6055386111549396586ULL;
unsigned long long int var_8 = 10134981310281680522ULL;
signed char var_10 = (signed char)28;
long long int var_11 = -7819299527010234176LL;
unsigned long long int var_12 = 9484319811011576841ULL;
signed char var_13 = (signed char)90;
long long int var_15 = -8194680295673279441LL;
long long int var_16 = -9219275540016431643LL;
long long int var_17 = 8644991938527790789LL;
int zero = 0;
signed char var_18 = (signed char)7;
long long int var_19 = -3758236924674466239LL;
unsigned long long int var_20 = 15858588383514499060ULL;
unsigned long long int var_21 = 6667620257918193900ULL;
unsigned long long int var_22 = 13764597860150830640ULL;
long long int var_23 = -6601603112048027152LL;
long long int var_24 = 7935751605443805915LL;
long long int var_25 = 5851993667939905410LL;
signed char var_26 = (signed char)18;
signed char var_27 = (signed char)-31;
signed char var_28 = (signed char)37;
long long int var_29 = 2970394820783948846LL;
unsigned long long int var_30 = 3343741644455139964ULL;
unsigned long long int var_31 = 62442278338648556ULL;
signed char var_32 = (signed char)124;
signed char var_33 = (signed char)-108;
unsigned long long int var_34 = 17507686589495937182ULL;
unsigned long long int arr_4 [12] ;
unsigned long long int arr_5 [12] ;
signed char arr_8 [12] [12] [12] ;
unsigned long long int arr_9 [12] ;
signed char arr_11 [12] ;
long long int arr_13 [12] [12] [12] ;
long long int arr_17 [12] ;
unsigned long long int arr_19 [12] [12] [12] ;
unsigned long long int arr_22 [13] [13] ;
signed char arr_23 [13] [13] ;
signed char arr_24 [13] ;
unsigned long long int arr_25 [13] ;
long long int arr_34 [19] [19] ;
unsigned long long int arr_37 [21] ;
signed char arr_38 [21] ;
signed char arr_39 [21] ;
signed char arr_40 [21] ;
signed char arr_6 [12] ;
unsigned long long int arr_7 [12] ;
unsigned long long int arr_20 [12] [12] [12] [12] [12] ;
signed char arr_21 [12] [12] [12] [12] ;
long long int arr_41 [21] ;
signed char arr_42 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1242302147261961214ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 5333444327201994317ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 4061255853219564956ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 206945029028161285LL : -5659424605959850663LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 2734226864082255862LL : 4237819364362384580LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 12914041589178568450ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = 9085276668953297430ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = 6927835371086231792ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_34 [i_0] [i_1] = 7119297346566586674LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_37 [i_0] = 6079664311053929439ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_38 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (signed char)54 : (signed char)120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (signed char)-65 : (signed char)-85;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 11873399197605320687ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 12476324057021450480ULL : 4036377599200035723ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)62 : (signed char)111;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? 914363265195428116LL : -5610832012337795521LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_42 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-17 : (signed char)96;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
