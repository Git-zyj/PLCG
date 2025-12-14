#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 529912847;
unsigned long long int var_4 = 17597398188933115592ULL;
int var_5 = 165481123;
unsigned long long int var_6 = 9681479170162215693ULL;
unsigned short var_8 = (unsigned short)41066;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)192;
signed char var_12 = (signed char)-7;
unsigned char var_14 = (unsigned char)12;
int zero = 0;
unsigned char var_16 = (unsigned char)66;
unsigned char var_17 = (unsigned char)242;
unsigned char var_18 = (unsigned char)196;
unsigned char var_19 = (unsigned char)78;
unsigned long long int var_20 = 305919474514893095ULL;
signed char var_21 = (signed char)34;
long long int var_22 = 6690522882317372476LL;
long long int var_23 = 1141456570860350023LL;
signed char var_24 = (signed char)-89;
unsigned short var_25 = (unsigned short)45123;
unsigned char var_26 = (unsigned char)138;
long long int var_27 = 4558835565591979149LL;
signed char var_28 = (signed char)-70;
unsigned short var_29 = (unsigned short)45679;
signed char var_30 = (signed char)-14;
int var_31 = -381470197;
unsigned short var_32 = (unsigned short)4883;
unsigned long long int var_33 = 8750408923380164426ULL;
int var_34 = -589388791;
long long int var_35 = -7890482819766983841LL;
unsigned int arr_0 [11] ;
unsigned int arr_3 [11] [11] ;
unsigned long long int arr_5 [11] [11] [11] ;
_Bool arr_6 [11] ;
unsigned int arr_7 [11] [11] [11] [11] ;
unsigned long long int arr_8 [11] [11] [11] ;
unsigned short arr_10 [11] ;
unsigned long long int arr_14 [11] [11] [11] [11] ;
short arr_15 [11] ;
int arr_19 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3939752558U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 1637030636U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1313504555201735984ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 2620026758U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3974761676698427200ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned short)13053;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 9302342035083955880ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (short)27205;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 47552209;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
