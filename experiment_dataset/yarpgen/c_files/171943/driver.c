#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11456;
unsigned short var_3 = (unsigned short)52260;
unsigned short var_4 = (unsigned short)45824;
short var_6 = (short)18893;
short var_7 = (short)-25433;
unsigned short var_8 = (unsigned short)38896;
unsigned short var_9 = (unsigned short)12193;
unsigned short var_10 = (unsigned short)2949;
short var_12 = (short)15848;
unsigned short var_13 = (unsigned short)25120;
int zero = 0;
unsigned short var_15 = (unsigned short)41978;
short var_16 = (short)27785;
unsigned short var_17 = (unsigned short)30863;
unsigned short var_18 = (unsigned short)42048;
unsigned short var_19 = (unsigned short)30287;
short var_20 = (short)-25679;
short var_21 = (short)20449;
unsigned short var_22 = (unsigned short)49309;
unsigned short var_23 = (unsigned short)30435;
unsigned short var_24 = (unsigned short)8186;
unsigned short var_25 = (unsigned short)57770;
unsigned short var_26 = (unsigned short)30702;
short var_27 = (short)12658;
unsigned short arr_1 [10] ;
unsigned short arr_2 [10] ;
unsigned short arr_10 [10] [10] [10] ;
unsigned short arr_18 [17] ;
unsigned short arr_19 [17] [17] ;
short arr_11 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)1557;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45241 : (unsigned short)56504;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)13881;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (unsigned short)40321;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)43904;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)30983 : (short)-2044;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
