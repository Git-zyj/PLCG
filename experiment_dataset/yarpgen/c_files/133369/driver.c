#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
unsigned int var_1 = 4153720335U;
signed char var_2 = (signed char)-70;
unsigned char var_3 = (unsigned char)204;
int var_4 = -297787039;
signed char var_12 = (signed char)-12;
signed char var_13 = (signed char)-52;
int var_14 = -378588259;
unsigned char var_18 = (unsigned char)13;
long long int var_19 = -6336713893097788614LL;
int zero = 0;
signed char var_20 = (signed char)93;
unsigned long long int var_21 = 16487181224167664695ULL;
signed char var_22 = (signed char)-73;
long long int var_23 = 3631949750166873655LL;
unsigned char arr_0 [15] ;
signed char arr_1 [15] ;
unsigned long long int arr_2 [15] [15] ;
unsigned char arr_3 [15] [15] [15] ;
long long int arr_4 [15] [15] [15] ;
unsigned int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 15849393329171155937ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2907168031475648120LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 2479963991U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
