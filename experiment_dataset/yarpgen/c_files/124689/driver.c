#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7853908853693689310LL;
long long int var_2 = 4690390035550171950LL;
unsigned long long int var_7 = 10117222475401940276ULL;
unsigned long long int var_9 = 12438524564679028571ULL;
short var_10 = (short)-14241;
short var_14 = (short)19943;
short var_15 = (short)-12467;
short var_17 = (short)5917;
int zero = 0;
unsigned long long int var_18 = 4418769968121508851ULL;
short var_19 = (short)24842;
unsigned long long int var_20 = 9067012000853586597ULL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-8956;
long long int arr_1 [17] [17] ;
unsigned long long int arr_3 [17] [17] ;
short arr_4 [17] ;
unsigned long long int arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -2924257215695636993LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 5610572923361309577ULL : 14288071829420187908ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)24916 : (short)18165;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1169132724180280055ULL : 12700375983308549565ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
