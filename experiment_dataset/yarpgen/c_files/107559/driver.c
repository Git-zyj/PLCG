#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3715444855009682699LL;
unsigned short var_2 = (unsigned short)34226;
int var_3 = -1880841206;
signed char var_4 = (signed char)-103;
unsigned long long int var_5 = 15666486041056539336ULL;
int var_6 = 873695618;
int var_7 = -11053452;
unsigned long long int var_8 = 3692683363836888746ULL;
short var_10 = (short)28968;
short var_13 = (short)-16133;
unsigned long long int var_15 = 8084856869287477830ULL;
unsigned short var_16 = (unsigned short)22207;
int zero = 0;
unsigned short var_17 = (unsigned short)22260;
long long int var_18 = 1551612122276946240LL;
unsigned long long int var_19 = 11596129869906014508ULL;
_Bool var_20 = (_Bool)0;
long long int var_21 = 4979977343045416117LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = 2514894618439590879LL;
unsigned int var_24 = 3067154354U;
signed char var_25 = (signed char)92;
long long int var_26 = -720674713865065783LL;
signed char var_27 = (signed char)-30;
unsigned int var_28 = 727367611U;
signed char var_29 = (signed char)-24;
signed char var_30 = (signed char)75;
short var_31 = (short)-21224;
unsigned char var_32 = (unsigned char)87;
unsigned short var_33 = (unsigned short)40007;
unsigned short var_34 = (unsigned short)62454;
int var_35 = 1699786168;
long long int var_36 = 5923585526889746212LL;
unsigned short var_37 = (unsigned short)20218;
signed char var_38 = (signed char)-1;
unsigned long long int var_39 = 1428221737704228190ULL;
unsigned short var_40 = (unsigned short)38024;
signed char var_41 = (signed char)-87;
int arr_0 [12] [12] ;
signed char arr_7 [12] [12] [12] [12] ;
unsigned long long int arr_8 [12] [12] [12] ;
long long int arr_11 [17] [17] ;
int arr_13 [17] [17] ;
_Bool arr_15 [17] [17] [17] ;
signed char arr_16 [17] [17] [17] [17] [17] [17] ;
int arr_18 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_32 [21] ;
long long int arr_35 [10] [10] ;
unsigned long long int arr_38 [25] ;
signed char arr_41 [24] ;
unsigned long long int arr_43 [24] [24] ;
long long int arr_44 [20] ;
unsigned int arr_9 [12] [12] ;
signed char arr_22 [17] [17] [17] [17] [17] ;
unsigned long long int arr_27 [17] [17] [17] [17] [17] ;
int arr_28 [17] ;
signed char arr_29 [17] ;
unsigned long long int arr_30 [17] ;
unsigned int arr_37 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -629815800;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 11754165428178158522ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = -7507850736874280676LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = 221994234;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1106806810;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = 11803614235036151618ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_35 [i_0] [i_1] = 2692101783122621556LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = 12498028600895789166ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_41 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_43 [i_0] [i_1] = 3735863261411885968ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_44 [i_0] = -8369098504162066227LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 838097178U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 1214577596342989474ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_28 [i_0] = 1293915618;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_29 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_30 [i_0] = 10899359620389816490ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_37 [i_0] [i_1] = 949664828U;
}

void checksum() {
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
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
