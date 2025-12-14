#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4028;
unsigned long long int var_1 = 15373132792050758443ULL;
short var_3 = (short)-12295;
int var_4 = 687305430;
unsigned long long int var_5 = 2128218544168054926ULL;
unsigned long long int var_7 = 11789208592267942710ULL;
_Bool var_8 = (_Bool)0;
long long int var_10 = -2846431165692404220LL;
signed char var_11 = (signed char)-85;
int zero = 0;
signed char var_14 = (signed char)43;
int var_15 = 724604014;
long long int var_16 = 6394105875930842014LL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)235;
int var_19 = 585627064;
unsigned char var_20 = (unsigned char)6;
unsigned char var_21 = (unsigned char)28;
signed char var_22 = (signed char)12;
long long int var_23 = 1433740213845585300LL;
unsigned long long int var_24 = 13846508972294487270ULL;
long long int var_25 = -5457256488682293027LL;
signed char arr_0 [10] [10] ;
signed char arr_5 [18] ;
signed char arr_6 [18] ;
int arr_7 [18] [18] ;
short arr_8 [18] [18] ;
signed char arr_11 [18] ;
unsigned long long int arr_13 [18] [18] [18] [18] ;
_Bool arr_14 [18] [18] [18] [18] ;
int arr_15 [18] [18] [18] [18] ;
long long int arr_20 [18] ;
unsigned long long int arr_25 [18] [18] ;
unsigned int arr_27 [18] ;
int arr_28 [18] ;
int arr_29 [18] ;
signed char arr_31 [18] [18] [18] [18] ;
unsigned int arr_34 [18] [18] [18] [18] [18] ;
signed char arr_38 [18] [18] ;
long long int arr_41 [18] [18] ;
unsigned long long int arr_51 [18] [18] [18] ;
unsigned long long int arr_54 [18] [18] [18] ;
long long int arr_64 [23] [23] ;
signed char arr_65 [23] ;
unsigned long long int arr_66 [23] ;
int arr_70 [25] [25] ;
unsigned int arr_71 [25] ;
signed char arr_4 [10] ;
unsigned long long int arr_16 [18] [18] ;
unsigned long long int arr_17 [18] [18] ;
int arr_18 [18] ;
signed char arr_19 [18] ;
unsigned long long int arr_23 [18] ;
long long int arr_26 [18] ;
int arr_36 [18] [18] [18] [18] [18] ;
long long int arr_37 [18] ;
unsigned int arr_40 [18] [18] [18] ;
short arr_44 [18] ;
long long int arr_45 [18] [18] ;
unsigned long long int arr_49 [18] [18] ;
unsigned long long int arr_52 [18] [18] [18] ;
signed char arr_53 [18] [18] ;
short arr_56 [18] [18] [18] ;
unsigned long long int arr_60 [18] [18] [18] [18] ;
unsigned long long int arr_61 [18] [18] [18] [18] ;
unsigned long long int arr_62 [18] [18] ;
long long int arr_63 [18] [18] ;
unsigned char arr_67 [23] [23] ;
short arr_68 [23] ;
long long int arr_69 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 1672621073;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-29546;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 7197559354753338636ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -2091751374;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = -2301917047754787196LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_25 [i_0] [i_1] = 4804632105704846198ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = 545823686U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = 539393014;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_29 [i_0] = 1795241857;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-19 : (signed char)-73;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = 31872936U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_38 [i_0] [i_1] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_41 [i_0] [i_1] = 5770457982663624004LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = 11593810297260887762ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 4895890234665667558ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_64 [i_0] [i_1] = (i_1 % 2 == 0) ? -603343414806018854LL : 145786768484470308LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_65 [i_0] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_66 [i_0] = (i_0 % 2 == 0) ? 8629037451771679887ULL : 14897303575501651543ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_70 [i_0] [i_1] = 1648137206;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_71 [i_0] = 1729587098U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = 14183342211692444233ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = 17226284305247509940ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = -1927349268;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = 16231083540605819882ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = -5133033619097176725LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 94827464 : -1590788146;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? -605444639352717275LL : -1655412987049955153LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 1346265210U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_44 [i_0] = (short)23518;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_45 [i_0] [i_1] = -8487772561703579624LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_49 [i_0] [i_1] = (i_1 % 2 == 0) ? 6468406004251387688ULL : 11162190783949841716ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 5468060601078452908ULL : 3885957196125972608ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_53 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)114 : (signed char)98;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = (short)25713;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = 9987367095690140140ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = 6566764653202728495ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_62 [i_0] [i_1] = 6055677520726138487ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_63 [i_0] [i_1] = 4232576638775750193LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_67 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)45 : (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_68 [i_0] = (i_0 % 2 == 0) ? (short)16083 : (short)-23731;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_69 [i_0] = (i_0 % 2 == 0) ? 3740940285029160289LL : 4326176759419878058LL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_52 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_56 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_60 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_62 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_63 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_67 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_68 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_69 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
