#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1592575507U;
short var_8 = (short)-11613;
unsigned int var_9 = 933442406U;
unsigned int var_10 = 2235998324U;
unsigned long long int var_13 = 2776398484416958959ULL;
unsigned char var_14 = (unsigned char)165;
unsigned long long int var_17 = 13796636452907777437ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)26752;
signed char var_19 = (signed char)-40;
int var_20 = -144351390;
signed char var_21 = (signed char)-8;
short var_22 = (short)-32658;
long long int var_23 = 1352196555857382205LL;
short var_24 = (short)12874;
unsigned char var_25 = (unsigned char)193;
_Bool var_26 = (_Bool)1;
long long int var_27 = 1444499218036671202LL;
unsigned char var_28 = (unsigned char)139;
int var_29 = 1813435895;
unsigned char var_30 = (unsigned char)42;
int var_31 = -1107087264;
int var_32 = -304392777;
unsigned short var_33 = (unsigned short)526;
unsigned long long int var_34 = 2950008844594534752ULL;
signed char var_35 = (signed char)82;
int var_36 = 24620717;
unsigned int var_37 = 2326650785U;
int var_38 = 1782738977;
unsigned short var_39 = (unsigned short)40232;
unsigned long long int var_40 = 5115598300988609335ULL;
unsigned short var_41 = (unsigned short)11672;
unsigned short arr_0 [14] ;
_Bool arr_2 [14] [14] ;
long long int arr_3 [14] ;
unsigned int arr_4 [14] [14] ;
unsigned char arr_6 [14] [14] [14] ;
int arr_7 [14] [14] [14] [14] ;
_Bool arr_8 [14] [14] [14] ;
unsigned long long int arr_10 [14] [14] [14] [14] ;
long long int arr_13 [13] ;
unsigned char arr_21 [18] ;
long long int arr_23 [18] ;
unsigned int arr_24 [18] [18] ;
unsigned int arr_25 [18] [18] ;
unsigned int arr_26 [18] [18] [18] ;
short arr_28 [18] [18] [18] [18] ;
_Bool arr_30 [18] ;
unsigned short arr_36 [18] [18] [18] ;
unsigned char arr_38 [18] ;
signed char arr_45 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)31168;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -1083533202584479285LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 898344400U : 3475735765U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -753481435;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 15122598017851689004ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 3057668258364208204LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = 7688245424855302318LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = 3878073976U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_25 [i_0] [i_1] = 1923492125U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 1954730987U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (short)13655;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_30 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned short)59261;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_38 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_45 [i_0] = (signed char)107;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
