#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)46154;
signed char var_6 = (signed char)-108;
signed char var_7 = (signed char)93;
unsigned long long int var_8 = 993391446541477153ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1754706887U;
unsigned long long int var_13 = 14387862099363217954ULL;
short var_16 = (short)-22259;
long long int var_17 = 582386664656440417LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)50715;
_Bool var_21 = (_Bool)0;
int var_22 = -1405435106;
signed char var_23 = (signed char)-105;
int var_24 = -1366790672;
signed char var_25 = (signed char)-85;
unsigned short var_26 = (unsigned short)10883;
unsigned short var_27 = (unsigned short)24588;
unsigned long long int var_28 = 12983278094125649731ULL;
long long int arr_0 [25] ;
short arr_2 [25] [25] ;
unsigned long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -7082259473367757314LL : -5694683346114768419LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-25028 : (short)-9069;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 16181495227093260442ULL : 6564443104058917058ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
