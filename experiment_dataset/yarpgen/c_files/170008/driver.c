#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4970991112826884283LL;
unsigned long long int var_1 = 7755948123237639836ULL;
int var_3 = 1066393684;
unsigned char var_4 = (unsigned char)37;
unsigned short var_5 = (unsigned short)13349;
signed char var_6 = (signed char)-68;
long long int var_7 = 7964269814029811973LL;
unsigned long long int var_8 = 14303403677385273459ULL;
int var_9 = -113274280;
unsigned int var_10 = 1063851143U;
unsigned char var_11 = (unsigned char)57;
signed char var_13 = (signed char)15;
int var_14 = -151217567;
signed char var_15 = (signed char)-123;
unsigned long long int var_16 = 12138948026109104279ULL;
unsigned int var_17 = 3830252269U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1397848863U;
unsigned int var_21 = 502923048U;
unsigned short var_22 = (unsigned short)64029;
unsigned long long int var_23 = 13426813548665058428ULL;
int var_24 = 1421877064;
int var_25 = -1771265191;
int var_26 = -90804424;
_Bool var_27 = (_Bool)1;
unsigned int arr_0 [18] ;
_Bool arr_1 [18] [18] ;
_Bool arr_2 [18] ;
unsigned long long int arr_3 [18] ;
int arr_5 [18] [18] [18] ;
short arr_6 [18] ;
unsigned char arr_8 [18] [18] [18] ;
unsigned long long int arr_9 [18] [18] ;
short arr_4 [18] [18] ;
_Bool arr_7 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 664586797U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 6012455915398777191ULL : 2595713514196085079ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1772197623;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)14295;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 13958994415772141839ULL : 16680094200918392168ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)7161 : (short)-16738;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
