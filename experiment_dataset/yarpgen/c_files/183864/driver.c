#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 3129493265263396839ULL;
unsigned char var_10 = (unsigned char)47;
int zero = 0;
unsigned long long int var_17 = 17479822963545862581ULL;
unsigned long long int var_18 = 15889756518555911535ULL;
signed char var_19 = (signed char)-93;
unsigned long long int var_20 = 3559966572590329253ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
_Bool arr_0 [17] ;
unsigned long long int arr_1 [17] ;
_Bool arr_2 [17] ;
unsigned long long int arr_4 [17] [17] ;
unsigned int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 6537791577983950180ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 2623179279809007300ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 2702304341U;
}

void checksum() {
    hash(&seed, var_17);
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
