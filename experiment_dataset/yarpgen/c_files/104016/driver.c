#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2768;
int var_1 = -1726444337;
_Bool var_2 = (_Bool)1;
int var_3 = -1552576421;
short var_4 = (short)-2286;
long long int var_5 = 6569887537506283256LL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)244;
_Bool var_8 = (_Bool)1;
short var_9 = (short)17856;
short var_10 = (short)-581;
long long int var_11 = -5632719918160703642LL;
long long int var_12 = -6512697877748731128LL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int var_16 = -1853294604;
long long int var_17 = -469783368151038134LL;
int zero = 0;
int var_18 = 1491062454;
unsigned long long int var_19 = 1058060683342067045ULL;
long long int var_20 = -8621198759641581350LL;
unsigned long long int var_21 = 13050195125441608513ULL;
unsigned long long int var_22 = 177483731153391680ULL;
long long int var_23 = 2350303114299044368LL;
unsigned long long int var_24 = 14757499359035013072ULL;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 10876168836434909782ULL;
unsigned long long int var_27 = 6388760444874741359ULL;
unsigned long long int var_28 = 8708568339478223520ULL;
unsigned long long int var_29 = 360429455316373194ULL;
short var_30 = (short)-3457;
int var_31 = 2101414629;
long long int var_32 = 2576219440603820464LL;
int var_33 = 1476985302;
long long int var_34 = 3957027007890859579LL;
unsigned long long int var_35 = 13082210479972868242ULL;
_Bool var_36 = (_Bool)0;
long long int var_37 = -8112227155857586289LL;
short var_38 = (short)3407;
_Bool var_39 = (_Bool)1;
long long int var_40 = -8406381884704904450LL;
long long int var_41 = -8270660680072792574LL;
long long int var_42 = 5891263306257227325LL;
long long int var_43 = -215114692328999285LL;
_Bool var_44 = (_Bool)0;
_Bool var_45 = (_Bool)0;
_Bool arr_9 [18] [18] ;
_Bool arr_20 [18] [18] [18] [18] ;
short arr_21 [18] [18] [18] [18] ;
_Bool arr_22 [18] [18] [18] [18] ;
int arr_31 [18] [18] [18] ;
int arr_32 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)25219 : (short)31071;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1321317761 : 1297426597;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_32 [i_0] [i_1] = -1577276775;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
