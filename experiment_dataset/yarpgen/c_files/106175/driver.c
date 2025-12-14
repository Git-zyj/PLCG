#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16342343741463576302ULL;
unsigned short var_2 = (unsigned short)59216;
unsigned short var_3 = (unsigned short)2893;
unsigned int var_4 = 2496389578U;
unsigned char var_5 = (unsigned char)104;
long long int var_6 = 6202862161951202704LL;
unsigned char var_8 = (unsigned char)206;
short var_9 = (short)-11746;
unsigned long long int var_10 = 13320071931529485752ULL;
signed char var_11 = (signed char)-4;
signed char var_12 = (signed char)91;
unsigned long long int var_13 = 8050726767900430836ULL;
short var_14 = (short)-19900;
int zero = 0;
int var_15 = 481466467;
unsigned long long int var_16 = 6613640126792701519ULL;
unsigned int var_17 = 343563392U;
unsigned short var_18 = (unsigned short)24271;
unsigned char var_19 = (unsigned char)10;
unsigned char var_20 = (unsigned char)215;
unsigned int var_21 = 1495136152U;
unsigned long long int var_22 = 8301058012459361336ULL;
_Bool var_23 = (_Bool)1;
int var_24 = -1237186499;
long long int arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
unsigned long long int arr_2 [14] [14] ;
unsigned char arr_5 [14] ;
int arr_6 [14] ;
_Bool arr_8 [14] [14] [14] ;
signed char arr_16 [14] ;
unsigned int arr_3 [14] ;
unsigned long long int arr_4 [14] ;
_Bool arr_23 [14] [14] ;
long long int arr_24 [14] ;
long long int arr_25 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -2623022727207977092LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 3579481973951288455ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 16750616681595769959ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 1000518151;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1782191427U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1497644870088362580ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? -6096171542051693268LL : -9151845657021960272LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 4037837906911998153LL : -1080936809188243807LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
