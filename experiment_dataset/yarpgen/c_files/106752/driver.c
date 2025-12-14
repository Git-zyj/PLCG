#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-16;
unsigned short var_2 = (unsigned short)53350;
long long int var_3 = -7176731393885011735LL;
unsigned long long int var_4 = 3640567139481172274ULL;
long long int var_5 = 7421123869478401092LL;
unsigned int var_6 = 32488966U;
signed char var_7 = (signed char)48;
int var_8 = 929803302;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4886676802640737216LL;
unsigned long long int var_12 = 16700843961136354617ULL;
short var_13 = (short)12087;
signed char var_14 = (signed char)-56;
short var_15 = (short)-11254;
unsigned char var_16 = (unsigned char)127;
unsigned char var_17 = (unsigned char)25;
long long int var_18 = -2627184835964705875LL;
long long int var_19 = -9101571790650085160LL;
signed char var_20 = (signed char)33;
signed char arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned int arr_3 [22] ;
long long int arr_5 [22] [22] [22] ;
signed char arr_8 [22] [22] [22] ;
long long int arr_10 [22] [22] [22] [22] ;
signed char arr_13 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1531689836U : 505495598U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -7598354186595141740LL : -1080905855591355235LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -368967649276011840LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)60 : (signed char)83;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
