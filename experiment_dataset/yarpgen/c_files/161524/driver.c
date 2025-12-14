#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)56834;
long long int var_8 = 518193776241516495LL;
signed char var_9 = (signed char)-34;
int zero = 0;
int var_14 = 1310186846;
unsigned int var_15 = 3322387912U;
int var_16 = 1705064954;
signed char var_17 = (signed char)104;
_Bool var_18 = (_Bool)0;
long long int var_19 = 3116247928893684275LL;
_Bool var_20 = (_Bool)1;
int var_21 = 1726769210;
signed char var_22 = (signed char)57;
unsigned int arr_0 [24] ;
int arr_1 [24] ;
unsigned short arr_4 [19] [19] ;
_Bool arr_6 [22] ;
signed char arr_8 [22] ;
long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1242586761U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1006705307;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)27659 : (unsigned short)18317;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1058289119093888983LL : 8848180891507536451LL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
