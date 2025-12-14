#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27921;
long long int var_1 = 3422452317397515811LL;
unsigned long long int var_4 = 5772468938689645878ULL;
int var_5 = -1036602231;
int var_7 = -2070735299;
int var_8 = -782807072;
int var_9 = 1347296979;
unsigned int var_10 = 2689254323U;
signed char var_11 = (signed char)-85;
int var_12 = -1781714783;
int zero = 0;
unsigned int var_14 = 805109242U;
signed char var_15 = (signed char)78;
unsigned int var_16 = 3885236292U;
unsigned long long int var_17 = 15625948221387032116ULL;
int var_18 = -1770440000;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 274611406U;
int var_21 = -191698391;
unsigned short var_22 = (unsigned short)10352;
unsigned int var_23 = 1847338442U;
signed char var_24 = (signed char)-53;
signed char var_25 = (signed char)24;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 3384556196U;
unsigned short var_28 = (unsigned short)23171;
unsigned int var_29 = 3277281985U;
signed char var_30 = (signed char)-39;
unsigned short var_31 = (unsigned short)25259;
signed char var_32 = (signed char)-25;
unsigned long long int var_33 = 4174107079141446616ULL;
unsigned int arr_0 [15] ;
signed char arr_1 [15] ;
signed char arr_2 [15] ;
long long int arr_3 [11] [11] ;
unsigned char arr_4 [11] [11] ;
unsigned long long int arr_5 [11] ;
signed char arr_6 [11] ;
unsigned short arr_7 [11] [11] ;
int arr_9 [11] [11] ;
unsigned short arr_12 [11] [11] ;
unsigned char arr_16 [18] [18] ;
unsigned short arr_17 [18] [18] ;
unsigned long long int arr_14 [11] [11] ;
unsigned short arr_21 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1579280277U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -5700121842306138556LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 15895917893041055365ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)55005;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = -944262986;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)24591;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)63334;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = 16466702466635509691ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (unsigned short)46334;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
