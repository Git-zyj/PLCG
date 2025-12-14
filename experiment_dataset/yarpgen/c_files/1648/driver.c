#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
unsigned long long int var_3 = 6218822129393431672ULL;
unsigned int var_5 = 458005928U;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 6684988531632465234ULL;
signed char var_12 = (signed char)103;
int zero = 0;
int var_15 = -1024767441;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-4;
int var_18 = -945532604;
signed char var_19 = (signed char)-11;
unsigned long long int var_20 = 6818379621087551136ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)121;
signed char arr_0 [23] ;
_Bool arr_3 [23] [23] ;
int arr_8 [23] ;
unsigned char arr_21 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -788875224 : -870808835;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)206 : (unsigned char)109;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
