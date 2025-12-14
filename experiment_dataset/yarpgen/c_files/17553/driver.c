#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2313;
signed char var_1 = (signed char)-25;
unsigned short var_2 = (unsigned short)26340;
unsigned short var_3 = (unsigned short)13789;
short var_4 = (short)-20692;
signed char var_5 = (signed char)55;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)50810;
unsigned long long int var_10 = 18238224691365760733ULL;
unsigned long long int var_11 = 10534334227335883358ULL;
unsigned int var_12 = 351083742U;
unsigned short var_13 = (unsigned short)45426;
unsigned short var_15 = (unsigned short)11849;
short var_16 = (short)-8868;
int zero = 0;
unsigned long long int var_18 = 6966044412407603654ULL;
unsigned long long int var_19 = 18205807215896203914ULL;
int var_20 = 654399330;
int var_21 = -1487099524;
unsigned int var_22 = 1537349573U;
unsigned char var_23 = (unsigned char)45;
signed char var_24 = (signed char)-34;
unsigned char var_25 = (unsigned char)156;
int var_26 = -1171369497;
short var_27 = (short)25105;
unsigned short var_28 = (unsigned short)53630;
unsigned long long int var_29 = 11609579950304219982ULL;
int arr_4 [11] ;
unsigned long long int arr_8 [11] [11] ;
unsigned long long int arr_12 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1845823671;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 12754744645149462816ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = 3011764569468292283ULL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
