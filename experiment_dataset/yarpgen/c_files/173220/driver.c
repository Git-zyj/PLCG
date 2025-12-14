#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53841;
int var_1 = -725605265;
unsigned short var_2 = (unsigned short)45507;
long long int var_4 = 6399920490582204528LL;
unsigned short var_5 = (unsigned short)48536;
long long int var_9 = -3486195559675734896LL;
unsigned char var_10 = (unsigned char)39;
short var_13 = (short)-2954;
unsigned short var_14 = (unsigned short)50731;
unsigned short var_15 = (unsigned short)9951;
int zero = 0;
long long int var_16 = -4078262035728593023LL;
unsigned short var_17 = (unsigned short)49907;
long long int var_18 = 4308272401581462421LL;
unsigned short var_19 = (unsigned short)26147;
unsigned char var_20 = (unsigned char)226;
long long int var_21 = 7497751742146066727LL;
int var_22 = -991714915;
unsigned char var_23 = (unsigned char)135;
long long int arr_0 [12] [12] ;
_Bool arr_1 [12] [12] ;
unsigned char arr_5 [12] ;
unsigned short arr_6 [12] ;
_Bool arr_8 [12] ;
int arr_9 [12] [12] ;
signed char arr_2 [12] [12] ;
unsigned int arr_11 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 9171085681682267077LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)20502;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = -1395684410;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3640236408U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
