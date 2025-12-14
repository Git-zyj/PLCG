#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23558;
unsigned long long int var_2 = 15261072284939715679ULL;
unsigned long long int var_3 = 7262181920549173793ULL;
signed char var_4 = (signed char)6;
signed char var_6 = (signed char)-50;
unsigned short var_8 = (unsigned short)26280;
unsigned short var_9 = (unsigned short)56647;
long long int var_12 = 2899410922059994503LL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)68;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 15760717260636696323ULL;
unsigned short var_19 = (unsigned short)28812;
unsigned int var_20 = 1988876985U;
unsigned char var_21 = (unsigned char)112;
signed char var_22 = (signed char)19;
unsigned long long int var_23 = 13273116183940428939ULL;
signed char var_24 = (signed char)126;
long long int var_25 = -837509292809943998LL;
long long int arr_0 [18] ;
unsigned long long int arr_2 [24] [24] ;
unsigned long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 867096876412793237LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 7481873692688892605ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 717737465951591124ULL : 1760953977490122743ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
