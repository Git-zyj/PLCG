#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
short var_1 = (short)-21080;
_Bool var_2 = (_Bool)0;
long long int var_8 = -1410063094370491462LL;
long long int var_15 = -769887319631962098LL;
unsigned long long int var_17 = 3028869006325531093ULL;
unsigned char var_18 = (unsigned char)239;
unsigned long long int var_19 = 14169906403690855668ULL;
int zero = 0;
short var_20 = (short)16212;
unsigned char var_21 = (unsigned char)18;
int var_22 = 543579853;
unsigned int var_23 = 372292181U;
unsigned char var_24 = (unsigned char)184;
int arr_0 [11] ;
long long int arr_1 [11] ;
short arr_2 [11] ;
long long int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 214100590;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 578987837366415506LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)31610;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 8346752816385263362LL : -6732289923743404206LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
