#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8906354187544902673LL;
unsigned short var_2 = (unsigned short)30918;
unsigned short var_3 = (unsigned short)51811;
long long int var_4 = -3762263774068681877LL;
signed char var_5 = (signed char)-6;
short var_6 = (short)11736;
unsigned long long int var_9 = 6219286606077737859ULL;
long long int var_11 = 170959311830371135LL;
int zero = 0;
unsigned char var_14 = (unsigned char)239;
unsigned long long int var_15 = 10447790343626058377ULL;
unsigned long long int var_16 = 17074332736684926572ULL;
unsigned int var_17 = 3663547006U;
long long int var_18 = -271922538878617225LL;
unsigned long long int var_19 = 4552234319885497827ULL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8669686567392689752LL;
signed char arr_0 [17] [17] ;
short arr_1 [17] ;
unsigned short arr_2 [17] ;
signed char arr_3 [17] ;
int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)16098;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)18699;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 248439080;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
