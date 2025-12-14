#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2701686122U;
int var_3 = 1727592723;
int var_4 = 898809281;
short var_5 = (short)16510;
unsigned int var_6 = 40027974U;
unsigned int var_8 = 2127780329U;
unsigned int var_9 = 1915106472U;
unsigned int var_10 = 4279613265U;
unsigned char var_11 = (unsigned char)246;
signed char var_12 = (signed char)26;
unsigned int var_14 = 1995211343U;
unsigned short var_15 = (unsigned short)52446;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2307052836U;
unsigned int var_19 = 4214584118U;
unsigned char var_20 = (unsigned char)168;
signed char var_21 = (signed char)29;
unsigned long long int var_22 = 12875733468676333355ULL;
unsigned long long int var_23 = 10350812058652306056ULL;
short var_24 = (short)-21192;
unsigned char var_25 = (unsigned char)61;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)98;
unsigned short var_28 = (unsigned short)32991;
signed char var_29 = (signed char)110;
unsigned short arr_1 [10] ;
unsigned char arr_4 [10] ;
unsigned char arr_5 [10] [10] ;
unsigned char arr_6 [10] ;
unsigned char arr_7 [10] [10] [10] ;
int arr_9 [10] ;
signed char arr_10 [10] ;
int arr_11 [10] [10] [10] [10] [10] [10] ;
unsigned char arr_12 [10] [10] [10] [10] [10] ;
signed char arr_14 [10] [10] [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)27642;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)195 : (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)230 : (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)137 : (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -1956554083 : 679837041;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1124893185 : 2114354880;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-95;
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
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
