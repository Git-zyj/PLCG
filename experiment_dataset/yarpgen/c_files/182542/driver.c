#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13619425300944775923ULL;
unsigned int var_3 = 3505765461U;
unsigned long long int var_4 = 17039298627488828613ULL;
unsigned int var_5 = 2463769291U;
int zero = 0;
short var_15 = (short)30770;
unsigned short var_16 = (unsigned short)35787;
long long int var_17 = 9061872758180724363LL;
unsigned char var_18 = (unsigned char)182;
long long int var_19 = 7201297157261004687LL;
unsigned int var_20 = 488063187U;
unsigned char arr_0 [12] ;
long long int arr_1 [12] ;
_Bool arr_3 [12] [12] [12] ;
unsigned short arr_5 [22] ;
short arr_6 [22] ;
short arr_7 [22] [22] ;
long long int arr_8 [22] ;
short arr_9 [22] [22] ;
long long int arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)5 : (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -5900915531014679063LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)27411;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)30760;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-18670;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = -4260073026940213840LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-25234;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -1427524901429042603LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
