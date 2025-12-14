#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5777622634385423456LL;
unsigned long long int var_1 = 1874258398309253610ULL;
unsigned long long int var_2 = 16170391474618354421ULL;
unsigned long long int var_3 = 2888074244637310880ULL;
unsigned short var_5 = (unsigned short)12245;
long long int var_7 = -5323037396437349645LL;
int var_8 = 978967890;
unsigned long long int var_9 = 1790361739573428489ULL;
unsigned int var_11 = 480971457U;
signed char var_12 = (signed char)-14;
short var_13 = (short)-15362;
long long int var_14 = -7188268924180937398LL;
unsigned short var_15 = (unsigned short)48244;
long long int var_16 = -1154263816947598098LL;
long long int var_17 = -3156198364779899372LL;
long long int var_18 = 786649775565509853LL;
int zero = 0;
long long int var_19 = 2344220288912324658LL;
unsigned int var_20 = 661737910U;
unsigned int var_21 = 95829632U;
unsigned char var_22 = (unsigned char)161;
unsigned int var_23 = 1201361038U;
unsigned short var_24 = (unsigned short)18480;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)83;
unsigned short var_27 = (unsigned short)15858;
signed char var_28 = (signed char)-58;
short var_29 = (short)10267;
int var_30 = 1234574407;
unsigned int var_31 = 2220763171U;
int var_32 = -883766837;
unsigned int var_33 = 1948651998U;
unsigned short var_34 = (unsigned short)13669;
unsigned short var_35 = (unsigned short)22150;
unsigned short arr_10 [21] [21] ;
long long int arr_17 [17] [17] [17] ;
unsigned char arr_20 [17] [17] [17] ;
long long int arr_31 [17] [17] [17] ;
signed char arr_32 [17] ;
unsigned short arr_37 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)1651 : (unsigned short)25284;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1415401875249899092LL : -69070397891948495LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1597978617654004572LL : -9006325574177763001LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (signed char)47 : (signed char)40;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_37 [i_0] = (unsigned short)15909;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
