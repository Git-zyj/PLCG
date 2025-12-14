#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3681168247350829604ULL;
unsigned long long int var_1 = 13978361763272882345ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 17846504160959148286ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)18459;
unsigned int var_6 = 1378145975U;
unsigned char var_7 = (unsigned char)207;
unsigned short var_8 = (unsigned short)35380;
short var_9 = (short)23749;
short var_10 = (short)27650;
unsigned char var_11 = (unsigned char)234;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4138574007U;
unsigned long long int var_15 = 5924449341565096499ULL;
unsigned long long int var_16 = 9159403242220354832ULL;
short var_17 = (short)-7854;
unsigned short var_18 = (unsigned short)14976;
unsigned long long int var_19 = 5903414131781920711ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)64943;
unsigned long long int var_21 = 1715603929734111167ULL;
unsigned short var_22 = (unsigned short)63432;
short var_23 = (short)27331;
unsigned long long int var_24 = 1921946424054541632ULL;
unsigned char var_25 = (unsigned char)117;
unsigned short var_26 = (unsigned short)30654;
short var_27 = (short)27884;
unsigned char var_28 = (unsigned char)150;
unsigned int var_29 = 236531935U;
short var_30 = (short)-31005;
unsigned long long int var_31 = 5970485242649142813ULL;
_Bool var_32 = (_Bool)1;
unsigned long long int var_33 = 15252177551504400553ULL;
unsigned long long int var_34 = 6803369676930939220ULL;
short var_35 = (short)69;
_Bool var_36 = (_Bool)0;
_Bool var_37 = (_Bool)1;
short var_38 = (short)15399;
unsigned long long int var_39 = 3220265368418215950ULL;
unsigned long long int var_40 = 356754944968828603ULL;
unsigned long long int var_41 = 9048214614282130483ULL;
unsigned short var_42 = (unsigned short)64775;
unsigned char var_43 = (unsigned char)197;
short var_44 = (short)16647;
short var_45 = (short)19132;
short var_46 = (short)-29973;
unsigned short var_47 = (unsigned short)26593;
unsigned char var_48 = (unsigned char)4;
short arr_7 [16] ;
unsigned long long int arr_25 [16] [16] [16] [16] [16] ;
short arr_30 [16] ;
_Bool arr_31 [16] [16] ;
unsigned long long int arr_36 [16] [16] [16] ;
unsigned long long int arr_37 [16] [16] ;
unsigned long long int arr_40 [16] ;
unsigned int arr_53 [16] [16] [16] ;
unsigned char arr_58 [16] ;
_Bool arr_59 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)29529 : (short)-4691;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 3223682686584560013ULL : 9176083056040349506ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (short)-8748 : (short)1700;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 13946002806616000171ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_37 [i_0] [i_1] = 14402317894426743588ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_40 [i_0] = 14670437277655687710ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = 1787268936U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_58 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_59 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_36 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_53 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_59 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
