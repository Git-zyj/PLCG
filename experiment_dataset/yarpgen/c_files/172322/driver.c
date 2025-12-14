#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)56;
unsigned long long int var_2 = 17481910125124406792ULL;
unsigned long long int var_4 = 7458091032414455072ULL;
unsigned long long int var_5 = 13585075328569097698ULL;
signed char var_6 = (signed char)47;
unsigned long long int var_7 = 4184866193703556638ULL;
signed char var_8 = (signed char)82;
unsigned long long int var_9 = 14294966584209053213ULL;
unsigned long long int var_10 = 12707032695410715344ULL;
unsigned long long int var_12 = 4903451169115414919ULL;
signed char var_14 = (signed char)-87;
int zero = 0;
unsigned long long int var_16 = 16846697462172715217ULL;
signed char var_17 = (signed char)-61;
unsigned long long int var_18 = 14336732810415402554ULL;
signed char var_19 = (signed char)-97;
signed char var_20 = (signed char)114;
signed char var_21 = (signed char)80;
signed char var_22 = (signed char)51;
signed char var_23 = (signed char)114;
signed char var_24 = (signed char)-118;
unsigned long long int var_25 = 16942648717388165272ULL;
signed char var_26 = (signed char)-33;
unsigned long long int var_27 = 1633390891821178540ULL;
signed char var_28 = (signed char)107;
unsigned long long int var_29 = 14737947787902345559ULL;
signed char var_30 = (signed char)-73;
signed char var_31 = (signed char)-109;
unsigned long long int var_32 = 863788099582804334ULL;
signed char var_33 = (signed char)-74;
unsigned long long int var_34 = 3544620662662026768ULL;
unsigned long long int var_35 = 2504208619043592692ULL;
unsigned long long int var_36 = 1948933918735981889ULL;
unsigned long long int var_37 = 7790291301710239436ULL;
signed char var_38 = (signed char)-70;
unsigned long long int var_39 = 1560059193289871748ULL;
signed char var_40 = (signed char)-38;
signed char var_41 = (signed char)49;
signed char var_42 = (signed char)-119;
unsigned long long int var_43 = 1635686347977079702ULL;
signed char var_44 = (signed char)66;
unsigned long long int var_45 = 8198943685961898657ULL;
unsigned long long int var_46 = 3458789853328344875ULL;
unsigned long long int var_47 = 4595150561668083021ULL;
unsigned long long int var_48 = 12890819727080470580ULL;
signed char arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
unsigned long long int arr_2 [14] [14] ;
signed char arr_4 [14] [14] [14] ;
unsigned long long int arr_5 [14] [14] [14] ;
signed char arr_6 [11] ;
unsigned long long int arr_10 [13] ;
signed char arr_12 [13] ;
signed char arr_13 [13] [13] ;
signed char arr_15 [13] [13] [13] ;
signed char arr_19 [13] [13] [13] [13] ;
unsigned long long int arr_20 [13] [13] ;
unsigned long long int arr_22 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_26 [13] ;
unsigned long long int arr_27 [13] ;
signed char arr_35 [13] [13] [13] [13] ;
unsigned long long int arr_36 [13] [13] [13] [13] [13] ;
signed char arr_37 [13] [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_38 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 9837281811577059816ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 5634783779773287531ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)81 : (signed char)-23;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 16672030151432539048ULL : 7501226082817693670ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3815555628906111425ULL : 2561471536694510525ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_20 [i_0] [i_1] = 1986600623639490732ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 17395891326575670636ULL : 16596698616356303307ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = 3461580104930861218ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 12964634421313403888ULL : 12250783073763230907ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = 12798245353850042809ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 5054533787865056840ULL;
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
    hash(&seed, var_47);
    hash(&seed, var_48);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
