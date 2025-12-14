#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2470846928U;
short var_2 = (short)-4640;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 14099241855301864689ULL;
int var_6 = -1293811075;
unsigned short var_7 = (unsigned short)29174;
short var_8 = (short)482;
short var_9 = (short)-17411;
int var_10 = -1613693193;
long long int var_12 = -6175725426369741002LL;
unsigned int var_13 = 2353654590U;
int zero = 0;
unsigned long long int var_16 = 17537639733494463795ULL;
unsigned long long int var_17 = 17362289602245678221ULL;
short var_18 = (short)-20157;
long long int var_19 = -8359603511155948975LL;
short var_20 = (short)11898;
long long int var_21 = -4159984850089965530LL;
unsigned int var_22 = 751736086U;
long long int var_23 = 201246981463732117LL;
unsigned long long int var_24 = 14510081621583430470ULL;
unsigned char var_25 = (unsigned char)154;
_Bool arr_0 [23] [23] ;
unsigned long long int arr_5 [23] ;
unsigned char arr_7 [23] [23] [23] ;
long long int arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 8780109835437280066ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)41 : (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -1424284981179271683LL : 9065922781548941116LL;
}

void checksum() {
    hash(&seed, var_16);
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
