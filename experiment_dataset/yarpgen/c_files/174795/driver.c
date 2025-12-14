#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6518412044146246410LL;
signed char var_1 = (signed char)-80;
long long int var_2 = -3704922024852370852LL;
long long int var_3 = 3745845181929726794LL;
unsigned int var_4 = 1452610353U;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)5;
unsigned int var_7 = 2645842915U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3597466976U;
unsigned long long int var_10 = 3410306276430421591ULL;
signed char var_11 = (signed char)-108;
int zero = 0;
unsigned char var_12 = (unsigned char)105;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)44715;
int var_15 = -642630204;
short var_16 = (short)-3615;
short var_17 = (short)30236;
unsigned short var_18 = (unsigned short)57457;
int var_19 = -1267398924;
short var_20 = (short)-10578;
int var_21 = 556436643;
unsigned short var_22 = (unsigned short)37608;
int var_23 = -448852021;
int var_24 = 1821923111;
unsigned char var_25 = (unsigned char)197;
signed char var_26 = (signed char)35;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 8727412654624130065ULL;
signed char var_29 = (signed char)-50;
unsigned long long int var_30 = 2984394228007036202ULL;
signed char var_31 = (signed char)95;
unsigned short var_32 = (unsigned short)20263;
signed char var_33 = (signed char)108;
signed char var_34 = (signed char)-109;
unsigned short var_35 = (unsigned short)380;
long long int var_36 = 5337851963588681313LL;
short var_37 = (short)-15600;
unsigned char var_38 = (unsigned char)67;
unsigned long long int var_39 = 16846792022002171026ULL;
signed char var_40 = (signed char)35;
unsigned short var_41 = (unsigned short)6867;
int var_42 = -1148651993;
unsigned int var_43 = 2543052570U;
short var_44 = (short)-2137;
int arr_0 [17] ;
int arr_5 [17] [17] [17] [17] ;
long long int arr_10 [17] [17] [17] [17] [17] ;
unsigned short arr_21 [13] [13] [13] [13] ;
unsigned int arr_32 [24] ;
short arr_33 [24] ;
_Bool arr_35 [24] [24] [24] ;
int arr_37 [24] [24] ;
_Bool arr_39 [22] ;
long long int arr_51 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1368889308;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 825919455;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -9216863646554859315LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned short)52293;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = 4167580772U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (short)-18785;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_37 [i_0] [i_1] = -860836676;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_39 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = -8348698269118001332LL;
}

void checksum() {
    hash(&seed, var_12);
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
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
