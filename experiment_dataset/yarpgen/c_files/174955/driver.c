#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-73;
unsigned short var_10 = (unsigned short)47698;
unsigned char var_14 = (unsigned char)195;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_20 = (short)1732;
unsigned short var_21 = (unsigned short)52729;
signed char var_22 = (signed char)9;
signed char var_23 = (signed char)-67;
long long int var_24 = -9143683981163158883LL;
signed char var_25 = (signed char)-66;
short var_26 = (short)13595;
_Bool arr_0 [10] ;
unsigned int arr_1 [10] ;
long long int arr_2 [10] ;
signed char arr_6 [10] ;
signed char arr_8 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3484691356U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3629078089548541490LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)26;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
