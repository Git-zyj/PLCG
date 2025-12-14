#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -49746649;
unsigned char var_3 = (unsigned char)104;
unsigned short var_4 = (unsigned short)21467;
unsigned short var_5 = (unsigned short)52300;
unsigned char var_8 = (unsigned char)186;
int var_9 = 109853026;
unsigned char var_10 = (unsigned char)228;
long long int var_11 = 5172844612659206195LL;
int var_12 = -1526493471;
unsigned short var_13 = (unsigned short)32613;
unsigned long long int var_14 = 6566553278645972341ULL;
int zero = 0;
signed char var_16 = (signed char)-79;
signed char var_17 = (signed char)-101;
unsigned short var_18 = (unsigned short)1293;
unsigned char var_19 = (unsigned char)202;
unsigned long long int var_20 = 16320085590427656692ULL;
long long int var_21 = 7240337704719214682LL;
_Bool var_22 = (_Bool)1;
int arr_0 [17] ;
long long int arr_1 [17] ;
unsigned char arr_2 [17] ;
int arr_4 [17] ;
int arr_8 [17] [17] [17] ;
unsigned char arr_9 [17] [17] ;
unsigned short arr_5 [17] ;
unsigned long long int arr_6 [17] ;
unsigned char arr_10 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1757975736 : -1478546948;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 6899003013567387453LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 244002167;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -555853711;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)145 : (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53893 : (unsigned short)54076;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 15625538667471029455ULL : 15812868373895292391ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)181 : (unsigned char)163;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
