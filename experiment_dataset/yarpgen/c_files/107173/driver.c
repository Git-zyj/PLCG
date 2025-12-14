#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11050;
long long int var_1 = 7964677614802082209LL;
unsigned long long int var_2 = 9629869159960272678ULL;
unsigned short var_3 = (unsigned short)9755;
long long int var_4 = -5505541263668840493LL;
signed char var_5 = (signed char)-48;
unsigned long long int var_6 = 12165400338170090339ULL;
unsigned int var_7 = 3040100141U;
signed char var_8 = (signed char)22;
unsigned int var_9 = 1786922475U;
unsigned short var_10 = (unsigned short)23903;
unsigned short var_11 = (unsigned short)20961;
unsigned short var_12 = (unsigned short)31983;
int zero = 0;
unsigned short var_13 = (unsigned short)47876;
long long int var_14 = -2532059141202437419LL;
unsigned long long int var_15 = 10945374921718058111ULL;
unsigned long long int var_16 = 8934313236654164386ULL;
signed char var_17 = (signed char)47;
int var_18 = 1058295208;
unsigned char var_19 = (unsigned char)101;
unsigned long long int var_20 = 14868034563393405158ULL;
long long int var_21 = 4537130984737238655LL;
unsigned long long int var_22 = 10682761503391003818ULL;
unsigned long long int var_23 = 529233288070041035ULL;
long long int var_24 = -2411570549946077168LL;
unsigned long long int var_25 = 4572166870044051674ULL;
unsigned int var_26 = 3173897209U;
unsigned short var_27 = (unsigned short)29225;
unsigned long long int var_28 = 14667069690682061339ULL;
unsigned char var_29 = (unsigned char)214;
unsigned char var_30 = (unsigned char)182;
unsigned long long int var_31 = 1118878913634213244ULL;
unsigned short var_32 = (unsigned short)9100;
unsigned int var_33 = 427865270U;
unsigned long long int var_34 = 16617693836303224473ULL;
unsigned short var_35 = (unsigned short)58882;
unsigned short var_36 = (unsigned short)64998;
unsigned long long int arr_0 [23] ;
unsigned long long int arr_1 [23] ;
unsigned long long int arr_4 [17] ;
unsigned short arr_5 [17] [17] [17] ;
signed char arr_6 [17] [17] [17] ;
int arr_7 [17] [17] ;
unsigned int arr_11 [17] [17] ;
signed char arr_12 [17] [17] [17] [17] ;
long long int arr_15 [17] [17] [17] [17] [17] [17] [17] ;
unsigned short arr_20 [17] [17] [17] [17] ;
unsigned short arr_21 [17] [17] [17] [17] [17] [17] ;
long long int arr_22 [17] [17] [17] [17] ;
unsigned int arr_29 [17] [17] [17] ;
unsigned int arr_33 [20] ;
unsigned short arr_2 [23] ;
unsigned short arr_17 [17] ;
unsigned long long int arr_18 [17] [17] [17] [17] ;
unsigned long long int arr_25 [17] ;
unsigned long long int arr_31 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2428940158969004519ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 13309423038257317224ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 934544650226045531ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)5021;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -1599522289 : 1589460355;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 583053247U : 1063510704U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)77 : (signed char)116;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? -7963540455157730302LL : 1522498712218762351LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31301;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned short)49429 : (unsigned short)60668;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 5225805729106223027LL : 8552057450112311842LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 357902356U : 2152276282U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? 464763570U : 2933950801U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)55145;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34305 : (unsigned short)54280;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 4215473680407830064ULL : 11410324313604186446ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 9822601931537396913ULL : 1705964824636678035ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? 15801895212027749239ULL : 37387965796270357ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
