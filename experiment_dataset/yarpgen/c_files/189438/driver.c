#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 202700492;
_Bool var_4 = (_Bool)0;
int var_5 = 1746934847;
long long int var_8 = -1036254314260642438LL;
int var_9 = 1987751197;
long long int var_12 = -7145730538911878374LL;
long long int var_19 = -6696571116561009397LL;
int zero = 0;
long long int var_20 = 7715645365122199013LL;
unsigned short var_21 = (unsigned short)21950;
signed char var_22 = (signed char)56;
long long int var_23 = -4560366737373893668LL;
unsigned long long int arr_3 [18] ;
unsigned int arr_10 [25] [25] [25] ;
unsigned short arr_11 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 10988572960132220687ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3560938820U : 2088066704U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)53275 : (unsigned short)24547;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
