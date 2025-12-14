#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
long long int var_4 = 4040491597991405907LL;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)81;
unsigned long long int var_14 = 11090970525543641130ULL;
int zero = 0;
int var_19 = -1962574454;
unsigned long long int var_20 = 9429201364576181458ULL;
unsigned long long int var_21 = 6733052528340883922ULL;
unsigned long long int var_22 = 4359288060461704177ULL;
unsigned char var_23 = (unsigned char)32;
_Bool var_24 = (_Bool)1;
_Bool arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_10 [10] [10] [10] ;
_Bool arr_17 [10] [10] [10] [10] ;
long long int arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3997299525291060400ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 18130042535856654691ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = -4687828616948732943LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
