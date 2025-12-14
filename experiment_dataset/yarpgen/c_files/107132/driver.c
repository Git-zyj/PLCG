#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1890151384U;
unsigned char var_3 = (unsigned char)204;
signed char var_5 = (signed char)117;
long long int var_6 = 4111160081060354468LL;
unsigned short var_7 = (unsigned short)57367;
unsigned long long int var_9 = 3051783433093447499ULL;
unsigned char var_10 = (unsigned char)235;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 6802768574585886904ULL;
unsigned char var_15 = (unsigned char)155;
unsigned long long int var_16 = 2464310028039554810ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)47748;
_Bool var_18 = (_Bool)0;
int var_19 = -1881803689;
unsigned short var_20 = (unsigned short)3913;
int var_21 = 1812110702;
unsigned char arr_0 [24] ;
long long int arr_1 [24] ;
short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 7854459946099867340LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-15358;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
