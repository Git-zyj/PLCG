#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28096;
short var_1 = (short)19181;
unsigned short var_2 = (unsigned short)57598;
short var_4 = (short)24802;
unsigned int var_6 = 3074116061U;
unsigned int var_7 = 2950431991U;
short var_8 = (short)-16623;
signed char var_9 = (signed char)-4;
unsigned int var_10 = 1785636932U;
_Bool var_12 = (_Bool)1;
long long int var_13 = 144364571718669602LL;
signed char var_14 = (signed char)41;
unsigned char var_15 = (unsigned char)72;
signed char var_16 = (signed char)55;
long long int var_17 = -6803047520538922084LL;
unsigned int var_18 = 1663686753U;
int zero = 0;
unsigned int var_19 = 495478448U;
unsigned int var_20 = 1886625409U;
unsigned int var_21 = 282394500U;
long long int var_22 = -2399555527193272402LL;
unsigned char var_23 = (unsigned char)124;
unsigned short var_24 = (unsigned short)39775;
unsigned short var_25 = (unsigned short)64871;
unsigned char var_26 = (unsigned char)186;
short var_27 = (short)25234;
unsigned int var_28 = 1695800444U;
unsigned char var_29 = (unsigned char)150;
signed char var_30 = (signed char)91;
unsigned char var_31 = (unsigned char)138;
unsigned long long int var_32 = 5857468897825503715ULL;
unsigned char var_33 = (unsigned char)83;
signed char var_34 = (signed char)31;
int var_35 = -1773874636;
unsigned char var_36 = (unsigned char)165;
unsigned char var_37 = (unsigned char)229;
long long int var_38 = -1243827510548432304LL;
unsigned char var_39 = (unsigned char)236;
_Bool var_40 = (_Bool)0;
long long int var_41 = -3925885946749555296LL;
short var_42 = (short)-4581;
int var_43 = -906976720;
unsigned int var_44 = 2102296183U;
int var_45 = 287000631;
unsigned int var_46 = 4285527842U;
unsigned int var_47 = 3778807401U;
unsigned long long int var_48 = 17350040438400841992ULL;
int var_49 = -1895088424;
long long int var_50 = -6876841396798965308LL;
unsigned long long int arr_0 [13] ;
long long int arr_1 [13] [13] ;
short arr_2 [13] ;
short arr_3 [13] [13] ;
short arr_4 [13] [13] ;
unsigned int arr_5 [13] ;
unsigned int arr_10 [13] [13] [13] [13] ;
short arr_11 [13] ;
short arr_12 [13] [13] [13] ;
short arr_13 [13] [13] [13] [13] [13] ;
long long int arr_14 [13] [13] ;
long long int arr_16 [13] ;
_Bool arr_18 [13] [13] ;
_Bool arr_20 [13] [13] ;
short arr_21 [13] [13] ;
unsigned int arr_22 [13] [13] ;
unsigned int arr_23 [13] [13] [13] ;
unsigned long long int arr_27 [13] [13] ;
unsigned char arr_38 [13] [13] [13] [13] [13] ;
long long int arr_39 [13] [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 8446704338100706745ULL : 12254335672312732619ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -1471650906840157279LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)9882;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-18789;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (short)27774;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 3695033622U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 126184356U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (short)26794;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)31442;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)17894;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = 385727891178439410LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 6107383006332190356LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (short)494;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = 1449471629U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 1552779240U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_27 [i_0] [i_1] = 10657593030107132424ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)145 : (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -2181698302498909111LL;
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
