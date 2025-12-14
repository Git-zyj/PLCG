#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -963635079;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int var_12 = 58105759;
unsigned short var_13 = (unsigned short)26473;
short var_14 = (short)-29483;
int zero = 0;
unsigned short var_18 = (unsigned short)10187;
signed char var_19 = (signed char)40;
unsigned int var_20 = 1690656401U;
long long int var_21 = -6201652957933422912LL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 18240506212475469725ULL;
unsigned long long int arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 9836170126978932880ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
