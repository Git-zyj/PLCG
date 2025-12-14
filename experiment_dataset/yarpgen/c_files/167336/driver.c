#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
signed char var_3 = (signed char)57;
unsigned char var_4 = (unsigned char)186;
short var_5 = (short)-2412;
unsigned char var_6 = (unsigned char)146;
unsigned char var_8 = (unsigned char)140;
unsigned long long int var_9 = 7892656143167606448ULL;
int var_10 = -906326599;
int zero = 0;
unsigned char var_11 = (unsigned char)178;
unsigned char var_12 = (unsigned char)172;
short var_13 = (short)-949;
long long int var_14 = 7065083260175267364LL;
unsigned char var_15 = (unsigned char)156;
short var_16 = (short)12567;
int var_17 = 597299705;
unsigned short arr_1 [10] ;
unsigned char arr_3 [10] ;
unsigned char arr_8 [14] [14] ;
long long int arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)56779;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = -5418480670808890276LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
