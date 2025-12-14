#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1161920785;
unsigned long long int var_5 = 10266963483558953042ULL;
long long int var_10 = -7820240499205114040LL;
signed char var_11 = (signed char)-57;
unsigned char var_12 = (unsigned char)212;
unsigned char var_13 = (unsigned char)249;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 17540702091871039620ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_18 = (short)-12900;
int var_19 = -1507748736;
signed char var_20 = (signed char)63;
unsigned int var_21 = 1038085429U;
int var_22 = -1447527016;
unsigned int arr_0 [19] ;
signed char arr_1 [19] ;
_Bool arr_2 [19] ;
long long int arr_3 [19] ;
_Bool arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1505354948U : 4205879349U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-94 : (signed char)70;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4403206470358433318LL : -6138265750482808655LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
