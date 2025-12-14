#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1417962842;
_Bool var_7 = (_Bool)1;
long long int var_8 = 3477461329712099674LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = -2498624738384926046LL;
signed char var_12 = (signed char)-78;
signed char var_13 = (signed char)-45;
unsigned long long int var_17 = 2352637442933073437ULL;
unsigned long long int var_18 = 13983963449947299772ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)7473;
short var_21 = (short)-21017;
unsigned int var_22 = 1339896315U;
signed char var_23 = (signed char)1;
unsigned long long int var_24 = 18286084508575139899ULL;
unsigned int var_25 = 1430203184U;
long long int var_26 = 5510842459960763943LL;
signed char var_27 = (signed char)103;
unsigned short var_28 = (unsigned short)64381;
short var_29 = (short)-28065;
_Bool arr_0 [22] ;
unsigned int arr_3 [22] ;
unsigned short arr_8 [22] [22] [22] [22] ;
int arr_10 [22] [22] [22] [22] ;
signed char arr_13 [22] [22] [22] ;
signed char arr_14 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 485574102U : 692358181U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)32856 : (unsigned short)19055;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 984799961 : -935578239;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)97 : (signed char)85;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)-63;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
