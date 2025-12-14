#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 669178240;
unsigned long long int var_1 = 13611137191021667870ULL;
long long int var_2 = -8859286498818360755LL;
unsigned long long int var_6 = 1857575933748716118ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)47653;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)26;
int zero = 0;
unsigned long long int var_15 = 3847005576004747206ULL;
short var_16 = (short)4104;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 3163342636990614941ULL;
signed char var_19 = (signed char)78;
unsigned int var_20 = 2548687780U;
int arr_0 [19] ;
unsigned int arr_2 [19] ;
_Bool arr_3 [19] ;
unsigned long long int arr_5 [19] [19] [19] ;
unsigned long long int arr_7 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 179334828;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 664357436U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13027482785799662263ULL : 11083856616862003253ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 10791485529275049125ULL : 179789699423077826ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
