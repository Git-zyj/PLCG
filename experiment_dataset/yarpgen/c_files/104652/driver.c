#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27749;
unsigned short var_1 = (unsigned short)12197;
long long int var_2 = 7941245505870996884LL;
long long int var_3 = 2923387722125750142LL;
unsigned int var_5 = 980489221U;
_Bool var_6 = (_Bool)0;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)-79;
unsigned short var_16 = (unsigned short)39729;
int zero = 0;
unsigned long long int var_19 = 14968882984659837687ULL;
unsigned long long int var_20 = 13896809626889278915ULL;
unsigned long long int var_21 = 14945948197469628487ULL;
unsigned char var_22 = (unsigned char)87;
unsigned char arr_0 [19] ;
short arr_1 [19] ;
long long int arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-6337;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -5339196938821106904LL : 975639210192855496LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
