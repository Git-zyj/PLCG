#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6860602857895198149LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -443114983628950932LL;
unsigned char var_5 = (unsigned char)151;
_Bool var_7 = (_Bool)0;
long long int var_10 = -2466409886427231685LL;
int zero = 0;
int var_12 = 1917962432;
short var_13 = (short)25957;
unsigned long long int var_14 = 3377011505271065154ULL;
long long int var_15 = -8933198395445385798LL;
int arr_0 [13] ;
unsigned char arr_1 [13] [13] ;
long long int arr_2 [13] ;
long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1524676010;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 5311235069538131052LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 7411722452354683888LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
