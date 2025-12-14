#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -489259180;
signed char var_2 = (signed char)69;
short var_6 = (short)-4860;
short var_10 = (short)2082;
short var_14 = (short)15713;
unsigned char var_16 = (unsigned char)45;
unsigned long long int var_17 = 13217958449218001829ULL;
int zero = 0;
signed char var_19 = (signed char)25;
signed char var_20 = (signed char)80;
short var_21 = (short)20523;
unsigned long long int var_22 = 16508860606765898912ULL;
unsigned int var_23 = 186177139U;
unsigned char var_24 = (unsigned char)0;
long long int var_25 = -2721488789614032465LL;
short var_26 = (short)-14846;
signed char var_27 = (signed char)52;
signed char var_28 = (signed char)34;
unsigned long long int var_29 = 6479184641608026023ULL;
signed char var_30 = (signed char)-55;
short var_31 = (short)24486;
short var_32 = (short)-21497;
unsigned short arr_0 [21] ;
unsigned long long int arr_1 [21] ;
signed char arr_2 [21] ;
short arr_5 [21] ;
unsigned char arr_6 [21] [21] [21] ;
unsigned short arr_7 [21] ;
unsigned char arr_10 [21] [21] [21] [21] ;
short arr_11 [21] [21] [21] ;
short arr_13 [21] [21] [21] ;
short arr_4 [21] [21] ;
unsigned short arr_8 [21] [21] [21] ;
unsigned long long int arr_9 [21] ;
unsigned long long int arr_14 [21] ;
unsigned short arr_35 [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)22947;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 8891154366495379090ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-1351;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned short)60922;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)27830;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)31222;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-438;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)13617;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 13017471275129665468ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 16637864712373363289ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)45754;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
