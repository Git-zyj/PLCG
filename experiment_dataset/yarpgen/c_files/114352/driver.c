#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
unsigned short var_2 = (unsigned short)17806;
unsigned int var_3 = 1814732253U;
unsigned long long int var_4 = 261744789207799911ULL;
unsigned int var_5 = 2811952632U;
unsigned int var_9 = 2918211873U;
unsigned long long int var_12 = 4963010735566217806ULL;
unsigned int var_13 = 1318339937U;
short var_14 = (short)7730;
short var_16 = (short)-25979;
unsigned long long int var_17 = 5270397963074663904ULL;
int zero = 0;
unsigned long long int var_18 = 8973959826290883797ULL;
unsigned long long int var_19 = 16182324742092779938ULL;
unsigned long long int var_20 = 3199608014018126711ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 9040749820800336389ULL;
long long int var_23 = -5540217869174833127LL;
long long int var_24 = 8626288053405522242LL;
unsigned char var_25 = (unsigned char)189;
unsigned char var_26 = (unsigned char)132;
unsigned char var_27 = (unsigned char)174;
long long int arr_1 [22] ;
long long int arr_2 [22] ;
unsigned char arr_13 [23] [23] [23] ;
short arr_4 [22] [22] ;
int arr_5 [22] ;
long long int arr_6 [22] [22] ;
unsigned long long int arr_7 [22] [22] ;
unsigned char arr_15 [23] [23] [23] [23] ;
int arr_18 [23] [23] ;
int arr_21 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -7060226261891051769LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 7660055915679010476LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)28 : (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-4203;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -1859847506;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 7486558212894472757LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 1218361052645563659ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)74 : (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = -115485970;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = -1825824408;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
