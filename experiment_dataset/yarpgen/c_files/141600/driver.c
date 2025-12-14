#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-11;
signed char var_2 = (signed char)-86;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 830177844117146898ULL;
signed char var_6 = (signed char)-30;
signed char var_9 = (signed char)85;
unsigned long long int var_11 = 847315262704211105ULL;
unsigned short var_15 = (unsigned short)35542;
unsigned long long int var_16 = 7729114830908672701ULL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)121;
int zero = 0;
unsigned short var_19 = (unsigned short)6124;
signed char var_20 = (signed char)24;
int var_21 = -728000174;
unsigned long long int var_22 = 1853478068729184952ULL;
int var_23 = 39907695;
unsigned long long int var_24 = 1638220542219875115ULL;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 15868700654441725314ULL;
signed char var_27 = (signed char)-38;
signed char arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
_Bool arr_2 [24] ;
unsigned long long int arr_3 [24] [24] ;
_Bool arr_6 [24] [24] [24] [24] ;
int arr_7 [24] [24] [24] [24] ;
unsigned long long int arr_13 [24] ;
signed char arr_16 [24] ;
unsigned long long int arr_9 [24] [24] [24] [24] ;
unsigned long long int arr_12 [24] [24] ;
unsigned long long int arr_17 [24] [24] [24] ;
unsigned long long int arr_23 [12] ;
signed char arr_24 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 6691493556116711470ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 9711395613446344186ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -224153706;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 1711357669320073650ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 9575813484263979967ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 5005434418296970309ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 1926894033467359873ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 4810721986992079823ULL : 6560982462602173552ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (signed char)126 : (signed char)60;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
