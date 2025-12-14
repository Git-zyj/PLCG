#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8857481264986343663LL;
long long int var_1 = -4886815280274158389LL;
unsigned short var_2 = (unsigned short)31683;
unsigned short var_3 = (unsigned short)48860;
_Bool var_4 = (_Bool)1;
long long int var_5 = -7770577535464544538LL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)22880;
unsigned int var_8 = 4001973069U;
unsigned char var_9 = (unsigned char)25;
short var_10 = (short)23194;
unsigned short var_11 = (unsigned short)57772;
unsigned short var_12 = (unsigned short)48572;
int zero = 0;
unsigned char var_13 = (unsigned char)55;
short var_14 = (short)23037;
unsigned short var_15 = (unsigned short)52781;
long long int var_16 = -7431296775847191461LL;
signed char arr_3 [11] ;
int arr_4 [11] [11] ;
signed char arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = -1822627294;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)60;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
