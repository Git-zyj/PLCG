#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8879255463207206794LL;
unsigned int var_2 = 1724401741U;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)42;
unsigned char var_9 = (unsigned char)29;
unsigned long long int var_11 = 16832654034669291851ULL;
short var_16 = (short)-24428;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3774638393U;
long long int var_19 = 5069752398310155460LL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-5291;
_Bool arr_0 [17] [17] ;
unsigned int arr_1 [17] [17] ;
int arr_2 [17] ;
int arr_4 [17] [17] ;
unsigned long long int arr_8 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 377862393U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -1285531830;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -930652117 : -1663796309;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 8754363195005144801ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
