#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14532658187361265955ULL;
long long int var_3 = 1043618929498166245LL;
unsigned long long int var_6 = 13401016931801553485ULL;
int var_8 = -952749160;
unsigned short var_13 = (unsigned short)52143;
int zero = 0;
unsigned short var_15 = (unsigned short)14164;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-37;
unsigned char var_18 = (unsigned char)255;
long long int var_19 = 7300670670449210121LL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1345776009U;
unsigned char arr_2 [17] ;
unsigned long long int arr_3 [17] [17] ;
long long int arr_4 [17] [17] ;
int arr_5 [17] ;
unsigned long long int arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 7593686074654918021ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = -3218325297211152679LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -1974933133;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 4167342212570585673ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
