#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 759002578796262539LL;
unsigned long long int var_8 = 7884530673670112771ULL;
short var_9 = (short)-6733;
short var_11 = (short)9541;
_Bool var_18 = (_Bool)1;
long long int var_19 = -7170691042202393245LL;
int zero = 0;
unsigned char var_20 = (unsigned char)8;
unsigned long long int var_21 = 605476665746487842ULL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)120;
int var_25 = 1182079783;
unsigned int var_26 = 2627495913U;
unsigned short var_27 = (unsigned short)55011;
int arr_0 [21] [21] ;
signed char arr_1 [21] ;
unsigned char arr_2 [21] ;
int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 806900384;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -1030213113;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
