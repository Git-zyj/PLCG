#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
unsigned long long int var_1 = 8039976171175848408ULL;
unsigned long long int var_2 = 10971528347233930460ULL;
unsigned short var_4 = (unsigned short)7854;
unsigned short var_5 = (unsigned short)62610;
long long int var_8 = 445052603395832387LL;
unsigned int var_11 = 1454384014U;
int zero = 0;
unsigned short var_12 = (unsigned short)50620;
unsigned long long int var_13 = 318080856352376852ULL;
unsigned int var_14 = 2387853453U;
unsigned long long int var_15 = 2265520958803317742ULL;
unsigned char var_16 = (unsigned char)234;
unsigned long long int var_17 = 3548823987569031644ULL;
short var_18 = (short)-3177;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-96;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_4 [20] [20] ;
unsigned long long int arr_8 [20] ;
unsigned char arr_9 [20] ;
long long int arr_12 [20] [20] ;
int arr_28 [20] [20] [20] ;
short arr_3 [20] [20] ;
unsigned int arr_6 [20] [20] ;
unsigned short arr_11 [20] ;
_Bool arr_22 [20] ;
unsigned short arr_25 [20] [20] [20] ;
unsigned int arr_30 [20] [20] [20] ;
unsigned long long int arr_31 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 6272749501765523283ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 1909069215288982963ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 1218029144434749338ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 7877578102095541136LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -50756489;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)26904;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 3223622355U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (unsigned short)21866;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned short)14654;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 1839371854U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = 10956272344530249690ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
