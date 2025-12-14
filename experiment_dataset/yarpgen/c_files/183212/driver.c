#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-124;
unsigned long long int var_3 = 2066971109360889362ULL;
long long int var_4 = -1548616970276292129LL;
unsigned short var_5 = (unsigned short)39854;
unsigned short var_7 = (unsigned short)11776;
unsigned long long int var_12 = 2974092763221845639ULL;
unsigned long long int var_15 = 5229221228030911999ULL;
int zero = 0;
unsigned long long int var_19 = 12627454276815585544ULL;
unsigned long long int var_20 = 15211617400420893187ULL;
unsigned short var_21 = (unsigned short)7918;
short var_22 = (short)22904;
unsigned short var_23 = (unsigned short)2662;
int var_24 = 766275613;
short var_25 = (short)-11767;
unsigned long long int var_26 = 15060202413178496462ULL;
signed char var_27 = (signed char)-11;
short var_28 = (short)15125;
int var_29 = -1245963180;
unsigned long long int arr_1 [20] ;
unsigned short arr_2 [20] [20] ;
short arr_3 [20] ;
unsigned long long int arr_8 [13] [13] ;
long long int arr_11 [13] [13] [13] ;
signed char arr_12 [13] ;
unsigned long long int arr_4 [20] ;
int arr_5 [20] [20] ;
unsigned long long int arr_6 [20] ;
unsigned long long int arr_9 [13] [13] ;
int arr_19 [13] ;
int arr_20 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 11470443721091698793ULL : 16575018847365058351ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35301 : (unsigned short)36810;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)-29188;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 4402232586663512598ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -6591876506099854437LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 5579392433255570158ULL : 16696964909766138338ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 34714624 : -1523921110;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 5659664841965747080ULL : 13493217010805526691ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 13001075527389891363ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = -1923376712;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_20 [i_0] [i_1] = -1036346692;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
