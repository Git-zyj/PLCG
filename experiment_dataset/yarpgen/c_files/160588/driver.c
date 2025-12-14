#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)106;
unsigned long long int var_5 = 17769481489275900087ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)43102;
signed char var_14 = (signed char)100;
signed char var_16 = (signed char)-108;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = 6697823077834083937LL;
long long int var_21 = 4642557132309156922LL;
long long int var_22 = 6291781072417740357LL;
long long int var_23 = -6388393971439943769LL;
int var_24 = -64005296;
unsigned int var_25 = 3222912312U;
long long int var_26 = -2900979308326471703LL;
long long int arr_0 [25] ;
_Bool arr_1 [25] ;
int arr_4 [11] ;
long long int arr_2 [25] [25] ;
int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1750249030839827234LL : 158033533676879529LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 968729186;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 5321340900767777580LL : -1826108444425166650LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 71903795;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
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
