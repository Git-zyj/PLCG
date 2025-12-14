#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8092819859475604310LL;
unsigned short var_1 = (unsigned short)22238;
signed char var_3 = (signed char)-50;
signed char var_4 = (signed char)-46;
unsigned short var_5 = (unsigned short)32717;
int var_6 = -1186329092;
int var_7 = -771992899;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)3939;
unsigned short var_11 = (unsigned short)16492;
unsigned short var_12 = (unsigned short)23598;
_Bool var_13 = (_Bool)0;
long long int var_14 = 6182567218901820995LL;
signed char var_15 = (signed char)-38;
signed char var_16 = (signed char)-33;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_19 = 563912472672645592LL;
int var_20 = 1620472660;
long long int var_21 = 969014666769717240LL;
int var_22 = -1789615967;
unsigned short var_23 = (unsigned short)6958;
int var_24 = 1123148014;
signed char var_25 = (signed char)117;
signed char var_26 = (signed char)38;
signed char var_27 = (signed char)119;
signed char var_28 = (signed char)-21;
signed char var_29 = (signed char)74;
long long int var_30 = -5581190688476511259LL;
int var_31 = 1535394271;
long long int var_32 = -4711410664351780428LL;
unsigned short var_33 = (unsigned short)603;
int var_34 = -262521803;
unsigned short var_35 = (unsigned short)5950;
int var_36 = -194551502;
signed char var_37 = (signed char)64;
unsigned short var_38 = (unsigned short)31702;
signed char var_39 = (signed char)74;
signed char var_40 = (signed char)-22;
signed char var_41 = (signed char)16;
int var_42 = 12145473;
long long int var_43 = 1222986634219583010LL;
long long int var_44 = -8624140499695879709LL;
long long int var_45 = 853143741325568995LL;
long long int var_46 = 3470974310044035112LL;
_Bool var_47 = (_Bool)1;
unsigned short var_48 = (unsigned short)41492;
long long int var_49 = 2643343896863365537LL;
_Bool var_50 = (_Bool)0;
signed char arr_0 [11] ;
long long int arr_1 [11] ;
long long int arr_2 [11] ;
int arr_4 [11] [11] [11] ;
unsigned short arr_7 [11] [11] [11] [11] ;
signed char arr_8 [11] [11] [11] [11] [11] ;
long long int arr_9 [11] [11] [11] [11] [11] ;
long long int arr_10 [11] [11] [11] [11] [11] ;
long long int arr_11 [11] [11] [11] ;
long long int arr_20 [11] [11] [11] [11] [11] [11] ;
signed char arr_22 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -5249544239037531309LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1631124269046568062LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 91217385;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)20712;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 5577818888175552639LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 20661201403969581LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -6484366621420643272LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 9019837573214307196LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-105;
}

void checksum() {
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
    hash(&seed, var_49);
    hash(&seed, var_50);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
