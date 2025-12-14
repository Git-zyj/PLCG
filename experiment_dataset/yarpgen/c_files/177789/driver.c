#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42284;
unsigned int var_1 = 2451673012U;
short var_2 = (short)-28499;
unsigned long long int var_3 = 1220655666213701349ULL;
unsigned int var_4 = 1420298721U;
unsigned char var_5 = (unsigned char)72;
short var_6 = (short)30937;
long long int var_7 = 3387696879103305501LL;
unsigned char var_9 = (unsigned char)174;
int zero = 0;
unsigned int var_10 = 1889832964U;
int var_11 = 1953713103;
unsigned long long int var_12 = 7972268757381868110ULL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-6924;
unsigned long long int var_16 = 16137982158135260067ULL;
unsigned long long int var_17 = 2853038869278208280ULL;
unsigned long long int var_18 = 3399098646345874977ULL;
int var_19 = -120333191;
signed char var_20 = (signed char)60;
unsigned short var_21 = (unsigned short)62313;
signed char var_22 = (signed char)50;
short var_23 = (short)-32656;
int var_24 = 817227172;
int var_25 = 926713690;
signed char var_26 = (signed char)-2;
unsigned int var_27 = 317184747U;
short var_28 = (short)-23770;
unsigned int var_29 = 918881866U;
int var_30 = 1225179249;
unsigned int var_31 = 2730424242U;
int var_32 = 1816345643;
signed char arr_16 [20] [20] ;
signed char arr_35 [25] [25] [25] ;
signed char arr_15 [20] [20] [20] [20] ;
signed char arr_19 [20] [20] ;
signed char arr_20 [20] ;
unsigned int arr_31 [25] [25] [25] ;
unsigned long long int arr_48 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-45 : (signed char)33;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)66 : (signed char)-62;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)-10 : (signed char)-71;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 395751730U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_48 [i_0] = 7493355856216981668ULL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_48 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
