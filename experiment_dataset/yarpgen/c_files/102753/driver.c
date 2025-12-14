#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-28;
signed char var_4 = (signed char)-65;
unsigned long long int var_5 = 6140931245794346969ULL;
unsigned char var_6 = (unsigned char)38;
signed char var_10 = (signed char)-118;
short var_12 = (short)-14988;
unsigned char var_15 = (unsigned char)222;
int var_16 = -1433001607;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 120302656050189617LL;
short var_19 = (short)-26884;
int var_20 = 1305772717;
short var_21 = (short)25233;
signed char var_22 = (signed char)-106;
unsigned char var_23 = (unsigned char)171;
_Bool var_24 = (_Bool)1;
short var_25 = (short)15511;
signed char var_26 = (signed char)-53;
unsigned char var_27 = (unsigned char)124;
unsigned long long int var_28 = 15278658599968841772ULL;
unsigned char arr_3 [22] [22] [22] ;
signed char arr_5 [22] [22] ;
unsigned char arr_6 [22] [22] [22] [22] ;
int arr_7 [22] ;
long long int arr_9 [22] [22] [22] ;
_Bool arr_10 [22] [22] ;
unsigned long long int arr_11 [22] ;
_Bool arr_15 [22] [22] [22] [22] ;
short arr_16 [20] [20] ;
unsigned char arr_19 [20] ;
unsigned long long int arr_20 [20] ;
unsigned short arr_21 [20] ;
unsigned char arr_31 [19] [19] [19] ;
unsigned int arr_22 [20] ;
long long int arr_38 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 1410841096;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -406056039900542558LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 1919350450715060669ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = (short)27419;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = 1886999410928628891ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (unsigned short)37271;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = 3098669789U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = 1995630748456473044LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
