#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12918658207752334529ULL;
unsigned long long int var_5 = 6274055690626622592ULL;
unsigned long long int var_8 = 6618598839653030932ULL;
int zero = 0;
unsigned int var_19 = 4039886790U;
unsigned char var_20 = (unsigned char)169;
_Bool var_21 = (_Bool)0;
int var_22 = 1673482756;
unsigned long long int var_23 = 7312823468208586710ULL;
unsigned int var_24 = 821256577U;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 2349485871U;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)-76;
unsigned int arr_2 [25] ;
short arr_3 [25] ;
unsigned char arr_7 [25] [25] ;
_Bool arr_9 [25] [25] [25] [25] ;
int arr_10 [25] [25] [25] [25] ;
long long int arr_11 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 4097389999U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)4196;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -560485638;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -5980107475716917601LL : -5916547769327477126LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
