#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23487;
long long int var_1 = -5650641667896384157LL;
unsigned short var_2 = (unsigned short)63190;
unsigned int var_4 = 4255819076U;
long long int var_5 = 2688125692325195373LL;
long long int var_8 = 1821123724692792437LL;
unsigned int var_9 = 1058658569U;
unsigned short var_11 = (unsigned short)10924;
long long int var_12 = 6671712059298723427LL;
unsigned short var_13 = (unsigned short)52005;
unsigned int var_16 = 1362585505U;
int zero = 0;
unsigned int var_18 = 160056851U;
unsigned short var_19 = (unsigned short)17964;
unsigned short var_20 = (unsigned short)18407;
long long int var_21 = 1335495787706744387LL;
long long int var_22 = -7816524587856868655LL;
long long int var_23 = 7422583881968507364LL;
unsigned int var_24 = 3953236162U;
long long int arr_2 [16] ;
unsigned short arr_5 [16] ;
unsigned int arr_14 [16] ;
long long int arr_15 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -5402549969541034125LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)27730;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 2719809219U : 647696525U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -7821805898470200745LL : 5716756430483475295LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
