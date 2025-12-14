#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28773;
short var_3 = (short)-1027;
int var_4 = -1440271433;
unsigned short var_6 = (unsigned short)37794;
long long int var_8 = 3665921025800508977LL;
unsigned short var_10 = (unsigned short)13146;
short var_11 = (short)22069;
unsigned long long int var_17 = 4831904288909088660ULL;
short var_18 = (short)5547;
int var_19 = 240619761;
int zero = 0;
signed char var_20 = (signed char)-56;
int var_21 = 457301644;
unsigned long long int var_22 = 17814089583521294478ULL;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
signed char arr_0 [22] ;
signed char arr_1 [22] ;
unsigned short arr_4 [22] ;
unsigned long long int arr_6 [22] [22] [22] ;
int arr_8 [22] [22] [22] ;
unsigned long long int arr_9 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)51307;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 17988225726517513605ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1408213717;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 9388843728541947483ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
