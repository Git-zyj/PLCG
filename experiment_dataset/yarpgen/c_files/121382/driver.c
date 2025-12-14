#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56172;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)16;
_Bool var_7 = (_Bool)1;
int var_8 = 2027480788;
signed char var_12 = (signed char)-35;
short var_13 = (short)-8825;
signed char var_14 = (signed char)6;
signed char var_15 = (signed char)-105;
unsigned int var_16 = 2183213438U;
unsigned int var_18 = 4008657522U;
int zero = 0;
signed char var_19 = (signed char)-98;
int var_20 = -557977104;
unsigned short var_21 = (unsigned short)47016;
unsigned short var_22 = (unsigned short)52617;
unsigned short var_23 = (unsigned short)1088;
unsigned int var_24 = 1842739794U;
unsigned char var_25 = (unsigned char)187;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 1181016480U;
long long int var_28 = 2212808750186203615LL;
long long int var_29 = 8550736414960833682LL;
long long int arr_0 [22] [22] ;
int arr_1 [22] ;
unsigned int arr_3 [22] ;
unsigned short arr_4 [22] [22] ;
unsigned char arr_5 [22] [22] [22] ;
_Bool arr_6 [22] ;
unsigned short arr_11 [22] ;
unsigned int arr_17 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -8247344144602778870LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 558897992;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1782406125U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)38462;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28868 : (unsigned short)50954;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3486463248U : 1847895820U;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
