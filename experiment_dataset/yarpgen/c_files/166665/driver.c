#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16038;
short var_1 = (short)20073;
short var_3 = (short)-29987;
unsigned long long int var_8 = 2872432221535852168ULL;
signed char var_9 = (signed char)32;
short var_10 = (short)23370;
short var_12 = (short)-27952;
int zero = 0;
short var_16 = (short)22716;
signed char var_17 = (signed char)-99;
short var_18 = (short)25391;
short var_19 = (short)-9764;
unsigned long long int var_20 = 7177112265055065106ULL;
unsigned long long int var_21 = 7767716829045823505ULL;
unsigned long long int var_22 = 7465740901644914473ULL;
unsigned long long int arr_0 [25] ;
short arr_1 [25] ;
short arr_5 [18] ;
short arr_2 [25] ;
short arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 10764445385915961882ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)15711;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-2832;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-24566;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-20893;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
