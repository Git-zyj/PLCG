#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39384;
unsigned long long int var_1 = 3025055991042270834ULL;
unsigned long long int var_2 = 15311137256061852753ULL;
unsigned char var_3 = (unsigned char)115;
signed char var_4 = (signed char)-58;
unsigned char var_5 = (unsigned char)202;
short var_6 = (short)-24868;
unsigned long long int var_7 = 3250044645200113464ULL;
short var_8 = (short)16446;
unsigned char var_9 = (unsigned char)188;
unsigned char var_10 = (unsigned char)107;
unsigned short var_12 = (unsigned short)51606;
int zero = 0;
long long int var_13 = -2965626581237202943LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)5;
_Bool arr_4 [18] ;
int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 271743849;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
