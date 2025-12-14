#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25336;
signed char var_2 = (signed char)-109;
unsigned long long int var_6 = 4401819597233936797ULL;
unsigned long long int var_7 = 1760140636065283962ULL;
long long int var_8 = -1910068115136631194LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 4200244828619218079ULL;
long long int var_11 = 3284031019677725635LL;
unsigned short var_12 = (unsigned short)23253;
unsigned short var_14 = (unsigned short)34921;
unsigned long long int var_15 = 16616080784245734467ULL;
int zero = 0;
signed char var_17 = (signed char)-84;
signed char var_18 = (signed char)-55;
long long int var_19 = -851905626231196769LL;
unsigned char var_20 = (unsigned char)230;
unsigned long long int var_21 = 3910340565005043208ULL;
unsigned short arr_1 [23] ;
unsigned char arr_5 [23] [23] ;
long long int arr_7 [23] ;
unsigned long long int arr_8 [23] ;
unsigned long long int arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)614;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 6485989754803132257LL : -8601870959962356057LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 5268871773604974208ULL : 4851845552941751751ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 4459815281174290493ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
