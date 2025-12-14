#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 8549973496513013715LL;
long long int var_4 = 6853027869911586630LL;
long long int var_5 = 951459777385579643LL;
unsigned short var_6 = (unsigned short)8838;
int var_7 = -1388435397;
unsigned char var_10 = (unsigned char)207;
unsigned int var_12 = 1726167521U;
long long int var_13 = 7163319875175045182LL;
unsigned short var_14 = (unsigned short)17018;
signed char var_16 = (signed char)-20;
int zero = 0;
short var_19 = (short)3131;
long long int var_20 = -159669631985398507LL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3004159936U;
unsigned long long int var_24 = 9593211220685898805ULL;
unsigned int var_25 = 2914814485U;
unsigned char var_26 = (unsigned char)63;
unsigned char var_27 = (unsigned char)145;
signed char var_28 = (signed char)35;
short var_29 = (short)32193;
long long int var_30 = 8722650739682752696LL;
long long int var_31 = -6490335687450815809LL;
unsigned long long int var_32 = 9855926731357401914ULL;
_Bool var_33 = (_Bool)1;
long long int var_34 = -2625937512497394660LL;
unsigned short arr_1 [19] [19] ;
long long int arr_2 [19] [19] ;
long long int arr_3 [19] ;
long long int arr_4 [19] [19] [19] [19] ;
long long int arr_5 [19] [19] [19] [19] ;
_Bool arr_8 [19] ;
long long int arr_9 [19] [19] [19] [19] [19] ;
_Bool arr_10 [19] [19] [19] [19] [19] [19] ;
_Bool arr_14 [18] [18] ;
_Bool arr_19 [18] ;
unsigned char arr_21 [18] [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)34770;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -6383176147433652371LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 5831319892164032522LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 9128661859530829043LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -7500873294189965107LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = -1973846711034156708LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)112;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
