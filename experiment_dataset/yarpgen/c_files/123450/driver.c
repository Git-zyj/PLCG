#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6519;
short var_1 = (short)-26768;
int var_2 = -974298258;
signed char var_3 = (signed char)-70;
unsigned short var_4 = (unsigned short)39734;
short var_5 = (short)24965;
signed char var_6 = (signed char)-48;
long long int var_7 = -5786743695669904645LL;
int var_8 = -1120564323;
unsigned char var_9 = (unsigned char)142;
short var_10 = (short)18883;
unsigned int var_11 = 1621472078U;
signed char var_12 = (signed char)-22;
signed char var_13 = (signed char)-26;
signed char var_15 = (signed char)-19;
int zero = 0;
signed char var_16 = (signed char)127;
_Bool var_17 = (_Bool)1;
short var_18 = (short)14093;
unsigned char var_19 = (unsigned char)104;
unsigned char var_20 = (unsigned char)191;
unsigned long long int var_21 = 11294541036583310262ULL;
unsigned short var_22 = (unsigned short)55374;
long long int var_23 = -4031768247251255645LL;
short var_24 = (short)-7759;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)-20;
unsigned char var_27 = (unsigned char)154;
signed char var_28 = (signed char)77;
long long int var_29 = 341993908282157653LL;
signed char var_30 = (signed char)-10;
unsigned char var_31 = (unsigned char)84;
short var_32 = (short)-32194;
unsigned char var_33 = (unsigned char)216;
int var_34 = 533333245;
int var_35 = 482208194;
unsigned char var_36 = (unsigned char)62;
signed char var_37 = (signed char)81;
_Bool var_38 = (_Bool)0;
unsigned long long int var_39 = 12859260518845572846ULL;
unsigned char var_40 = (unsigned char)41;
unsigned long long int var_41 = 9636189293676043169ULL;
unsigned char var_42 = (unsigned char)192;
long long int var_43 = -2435466833665749362LL;
signed char var_44 = (signed char)-49;
int var_45 = 765589686;
long long int var_46 = -942486436554626743LL;
int var_47 = 1109366529;
unsigned long long int var_48 = 15094992321680771493ULL;
_Bool var_49 = (_Bool)0;
short arr_2 [25] [25] ;
unsigned char arr_4 [10] ;
int arr_5 [10] ;
_Bool arr_9 [10] [10] [10] [10] ;
int arr_11 [10] [10] [10] ;
long long int arr_14 [10] [10] [10] [10] [10] [10] ;
long long int arr_26 [10] [10] [10] [10] [10] [10] ;
short arr_35 [18] [18] ;
unsigned int arr_36 [18] [18] [18] ;
unsigned int arr_37 [18] [18] [18] [18] ;
short arr_43 [18] [18] [18] ;
long long int arr_48 [18] [18] [18] [18] ;
unsigned char arr_61 [18] [18] [18] [18] [18] ;
unsigned long long int arr_62 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)8267;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 1445619807;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1890050587 : -1983694722;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7185852644176830155LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -3252738515296332062LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_35 [i_0] [i_1] = (short)8783;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 1880068435U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 1125050722U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (short)-13440;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 3946059422532754452LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_62 [i_0] [i_1] = 12227593963480027024ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_62 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
