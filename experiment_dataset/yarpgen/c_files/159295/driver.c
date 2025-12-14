#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_10 = (_Bool)0;
long long int var_12 = 6961027518076857500LL;
unsigned long long int var_13 = 7944737231247708674ULL;
long long int var_14 = -4541144265087665521LL;
unsigned long long int var_15 = 4417767833351324661ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 11543750592358781187ULL;
unsigned long long int var_19 = 1803715283568950251ULL;
int zero = 0;
unsigned long long int var_20 = 3690226707656047807ULL;
unsigned long long int var_21 = 14557890991759358305ULL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 5778604158949204034ULL;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 691370973462232197ULL;
unsigned long long int var_28 = 16313914431616261774ULL;
long long int var_29 = 8509312488325221037LL;
long long int var_30 = 3399369784771583579LL;
unsigned long long int var_31 = 8579217337681847842ULL;
unsigned long long int var_32 = 11581592144968407214ULL;
unsigned long long int var_33 = 9788471838315439405ULL;
long long int var_34 = -6317103010327317989LL;
long long int var_35 = 3657120481316371375LL;
unsigned long long int var_36 = 6633316710909647192ULL;
_Bool var_37 = (_Bool)0;
_Bool arr_0 [12] ;
long long int arr_1 [12] [12] ;
long long int arr_3 [12] [12] [12] ;
long long int arr_5 [12] [12] ;
_Bool arr_7 [12] [12] ;
long long int arr_8 [12] [12] [12] [12] [12] ;
long long int arr_12 [12] [12] [12] [12] ;
_Bool arr_15 [18] [18] ;
_Bool arr_16 [18] ;
_Bool arr_24 [17] [17] [17] [17] ;
unsigned long long int arr_25 [17] [17] [17] ;
long long int arr_31 [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 6319570384132326462LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3383433546092775370LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = -401481133734262477LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 7202296953923186673LL : -7516166375218012578LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 2576827009689947065LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7933445962063990815ULL : 15455913876201287210ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 4325717787164275828LL : -9091895951482047954LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
