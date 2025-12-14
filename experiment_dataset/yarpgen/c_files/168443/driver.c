#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33885;
unsigned short var_3 = (unsigned short)10026;
unsigned short var_4 = (unsigned short)60918;
signed char var_6 = (signed char)30;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 18109303663667726378ULL;
long long int var_11 = -1168171685980847169LL;
unsigned int var_12 = 3441446507U;
_Bool var_16 = (_Bool)0;
unsigned int var_18 = 3995955281U;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -820128795485830188LL;
long long int var_21 = -479604373182461685LL;
int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 827516204;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
