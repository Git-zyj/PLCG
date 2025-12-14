#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7261028167476003853LL;
int var_2 = 1980872005;
long long int var_4 = 3741216895707836418LL;
short var_5 = (short)-20888;
long long int var_6 = -4898962657949778854LL;
int var_7 = 2023314276;
int var_11 = -140841580;
unsigned short var_12 = (unsigned short)7282;
unsigned long long int var_13 = 366093961981074365ULL;
int zero = 0;
int var_18 = -1717215514;
unsigned short var_19 = (unsigned short)14284;
unsigned long long int var_20 = 15691049497597797050ULL;
long long int var_21 = -2187986050701756010LL;
unsigned int var_22 = 572094722U;
unsigned long long int var_23 = 8141429958998817531ULL;
long long int arr_0 [19] ;
int arr_6 [21] [21] ;
unsigned short arr_7 [21] [21] [21] ;
unsigned char arr_8 [21] [21] ;
_Bool arr_9 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5314353475922333114LL : -787284948500468672LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -1629444583 : -1567159582;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)50064 : (unsigned short)27753;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)23 : (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
