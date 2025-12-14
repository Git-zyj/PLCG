#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18402;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-74;
long long int var_7 = 7176050868984540074LL;
unsigned long long int var_8 = 17945718544039036367ULL;
unsigned long long int var_11 = 16927747511999731868ULL;
signed char var_12 = (signed char)41;
unsigned long long int var_14 = 7800802220723741079ULL;
short var_16 = (short)8965;
int zero = 0;
short var_17 = (short)-2613;
unsigned long long int var_18 = 10484167428882853101ULL;
unsigned short var_19 = (unsigned short)29242;
short var_20 = (short)16922;
unsigned int arr_0 [12] [12] ;
unsigned long long int arr_1 [12] [12] ;
unsigned short arr_2 [12] ;
_Bool arr_3 [12] [12] [12] ;
unsigned short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 2989641392U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 6034123980193619179ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)56550;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)44995;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
