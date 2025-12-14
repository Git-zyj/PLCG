#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2655540446863950725LL;
long long int var_1 = 2318657140614837465LL;
signed char var_2 = (signed char)-77;
unsigned char var_3 = (unsigned char)145;
unsigned short var_4 = (unsigned short)13735;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 361939148421439777ULL;
unsigned int var_8 = 3193232161U;
int zero = 0;
unsigned char var_10 = (unsigned char)228;
unsigned short var_11 = (unsigned short)16291;
signed char var_12 = (signed char)-67;
unsigned int var_13 = 2767923358U;
short var_14 = (short)10694;
long long int var_15 = -5037300531603369869LL;
signed char var_16 = (signed char)-60;
unsigned int var_17 = 274795358U;
long long int arr_0 [25] ;
unsigned short arr_1 [25] ;
signed char arr_3 [20] ;
unsigned char arr_4 [20] [20] ;
int arr_6 [20] ;
_Bool arr_2 [25] ;
unsigned long long int arr_7 [20] ;
unsigned char arr_11 [14] ;
_Bool arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -1556810776413985240LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)65486;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -715071506;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 15800122702265034093ULL : 7221034267672011062ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
