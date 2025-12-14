#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
signed char var_5 = (signed char)-76;
signed char var_6 = (signed char)23;
unsigned short var_7 = (unsigned short)60636;
long long int var_8 = -1484717022541598018LL;
unsigned int var_11 = 3833323079U;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2264501620U;
unsigned char var_19 = (unsigned char)94;
int zero = 0;
long long int var_20 = 6977433050002666077LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1356774100U;
unsigned char var_23 = (unsigned char)187;
unsigned int var_24 = 3405573266U;
long long int var_25 = 5511868250175591968LL;
unsigned int var_26 = 755787099U;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 3684992758U;
unsigned int var_29 = 10279806U;
unsigned short arr_3 [10] ;
unsigned char arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17976 : (unsigned short)26933;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)88;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
