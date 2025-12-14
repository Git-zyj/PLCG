#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10480734327107894917ULL;
long long int var_1 = -7579085354407235521LL;
unsigned int var_2 = 1559773433U;
long long int var_3 = -970920619132803244LL;
int var_4 = -141027480;
int var_5 = -1234779478;
unsigned char var_6 = (unsigned char)170;
signed char var_7 = (signed char)98;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 17593298376708221754ULL;
unsigned int var_10 = 1637661761U;
signed char var_11 = (signed char)84;
unsigned char var_12 = (unsigned char)53;
int zero = 0;
signed char var_13 = (signed char)-56;
_Bool var_14 = (_Bool)1;
int var_15 = -1698292445;
int var_16 = -673166651;
long long int var_17 = -1826699915343587174LL;
_Bool var_18 = (_Bool)0;
int var_19 = 1751632815;
long long int var_20 = 4042257956076315669LL;
unsigned long long int var_21 = 5834725033518143962ULL;
int var_22 = -1229870009;
unsigned char var_23 = (unsigned char)9;
signed char var_24 = (signed char)-122;
unsigned long long int arr_0 [13] [13] ;
int arr_1 [13] [13] ;
short arr_3 [13] ;
long long int arr_4 [13] [13] [13] ;
unsigned char arr_8 [13] [13] [13] [13] ;
long long int arr_11 [20] ;
unsigned char arr_12 [20] ;
unsigned long long int arr_13 [20] ;
unsigned char arr_17 [20] ;
unsigned int arr_18 [20] ;
signed char arr_19 [20] ;
unsigned char arr_14 [20] ;
unsigned char arr_15 [20] ;
unsigned char arr_23 [20] [20] [20] [20] ;
int arr_24 [20] ;
long long int arr_25 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 16492468437770064780ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1785457165;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)16390;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -4827902795537601344LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = -5847532603747397496LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 14803106486619628539ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = 2729408787U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = 768541906;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = -949476497975254851LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
