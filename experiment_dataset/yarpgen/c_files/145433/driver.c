#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5532797976246771611ULL;
unsigned long long int var_2 = 17457329565874821000ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 13881928500053686998ULL;
unsigned long long int var_7 = 1187160258100357473ULL;
short var_8 = (short)-32219;
signed char var_10 = (signed char)71;
int var_11 = 1673120144;
int zero = 0;
unsigned long long int var_12 = 13577198650048837790ULL;
int arr_0 [24] ;
unsigned short arr_2 [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1927568534;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)40005 : (unsigned short)54979;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4011689255625649362LL : 4473897949733756477LL;
}

void checksum() {
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
