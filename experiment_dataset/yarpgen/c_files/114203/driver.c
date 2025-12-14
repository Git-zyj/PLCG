#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-2017;
short var_7 = (short)19028;
short var_9 = (short)9384;
long long int var_11 = 4362001749340439207LL;
long long int var_15 = -1494381847963943970LL;
int zero = 0;
unsigned char var_20 = (unsigned char)17;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 3685036234501256815ULL;
_Bool var_23 = (_Bool)0;
short var_24 = (short)26011;
unsigned long long int arr_0 [18] ;
int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 30791738538389082ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1902956658;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 17188025339732739290ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-5894;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
