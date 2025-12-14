#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -78503430;
long long int var_3 = -8119817288183919089LL;
unsigned int var_4 = 4061959648U;
unsigned int var_5 = 3007139647U;
unsigned long long int var_6 = 3596926671512404221ULL;
int var_7 = -157089283;
int var_9 = 970822633;
signed char var_15 = (signed char)46;
int zero = 0;
long long int var_19 = -3006506506813638066LL;
unsigned int var_20 = 2095378087U;
short var_21 = (short)-21690;
int var_22 = 1172661108;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)81;
int var_25 = 1123918871;
unsigned char var_26 = (unsigned char)255;
int var_27 = -1162197864;
unsigned char var_28 = (unsigned char)78;
short var_29 = (short)24698;
unsigned char var_30 = (unsigned char)46;
signed char arr_3 [13] [13] ;
unsigned long long int arr_4 [13] [13] ;
int arr_6 [13] ;
signed char arr_7 [13] [13] [13] ;
unsigned char arr_9 [13] [13] ;
signed char arr_14 [13] ;
unsigned char arr_19 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 13752978730631529264ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -1981796612;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (unsigned char)57;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
