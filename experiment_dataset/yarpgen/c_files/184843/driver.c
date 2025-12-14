#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17177;
unsigned char var_1 = (unsigned char)196;
long long int var_2 = 5939387924800416711LL;
unsigned char var_3 = (unsigned char)149;
unsigned int var_4 = 3286484184U;
unsigned short var_5 = (unsigned short)25080;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 8706129595737231383ULL;
signed char var_8 = (signed char)36;
signed char var_9 = (signed char)-109;
unsigned char var_10 = (unsigned char)43;
long long int var_11 = -7367852932097907944LL;
signed char var_12 = (signed char)-123;
unsigned long long int var_13 = 1597425498035296680ULL;
int zero = 0;
int var_14 = -1422711377;
int var_15 = 1579542567;
unsigned long long int var_16 = 17873253169178558646ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)47841;
signed char var_19 = (signed char)83;
signed char var_20 = (signed char)-117;
unsigned long long int var_21 = 10269887042711401957ULL;
long long int var_22 = 7672976321654720770LL;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)178;
unsigned short var_25 = (unsigned short)18185;
unsigned short var_26 = (unsigned short)4090;
unsigned long long int var_27 = 7053117230167229153ULL;
unsigned char var_28 = (unsigned char)56;
unsigned char var_29 = (unsigned char)156;
unsigned long long int var_30 = 4992567376085146587ULL;
unsigned char var_31 = (unsigned char)178;
short var_32 = (short)6517;
signed char var_33 = (signed char)-11;
unsigned long long int var_34 = 3720085239954629667ULL;
long long int var_35 = -6441932584375723810LL;
unsigned int var_36 = 1316883303U;
signed char var_37 = (signed char)-80;
unsigned short var_38 = (unsigned short)59353;
unsigned int var_39 = 3092879833U;
unsigned char var_40 = (unsigned char)37;
signed char var_41 = (signed char)21;
unsigned short var_42 = (unsigned short)47519;
signed char var_43 = (signed char)77;
unsigned char var_44 = (unsigned char)137;
unsigned char var_45 = (unsigned char)58;
unsigned long long int var_46 = 3555975104918919097ULL;
unsigned char var_47 = (unsigned char)38;
unsigned long long int var_48 = 1690931573712237534ULL;
signed char var_49 = (signed char)-76;
unsigned short var_50 = (unsigned short)15000;
unsigned char var_51 = (unsigned char)78;
unsigned char var_52 = (unsigned char)50;
unsigned int var_53 = 2094750845U;
signed char var_54 = (signed char)78;
long long int var_55 = 2631335767075086055LL;
unsigned int var_56 = 3937326057U;
_Bool var_57 = (_Bool)0;
int var_58 = 1743259514;
short var_59 = (short)6486;
unsigned int var_60 = 2153283303U;
unsigned long long int var_61 = 417926846705650365ULL;
unsigned long long int var_62 = 9924883881625394684ULL;
unsigned int var_63 = 638884476U;
_Bool var_64 = (_Bool)1;
short var_65 = (short)29006;
unsigned char var_66 = (unsigned char)48;
int arr_0 [24] ;
_Bool arr_3 [15] [15] ;
unsigned int arr_10 [15] [15] ;
signed char arr_13 [15] [15] [15] [15] ;
unsigned int arr_14 [15] [15] [15] [15] [15] ;
unsigned int arr_15 [15] [15] [15] [15] [15] ;
short arr_17 [15] ;
signed char arr_19 [15] [15] [15] ;
int arr_20 [15] [15] [15] [15] ;
unsigned int arr_24 [15] [15] [15] [15] ;
signed char arr_29 [15] [15] ;
int arr_38 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1276176606;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = 2573113797U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 1807638530U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 3218996049U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (short)17956;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -66528651;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 932574272U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_29 [i_0] [i_1] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -363143706 : -1540852935;
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
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
