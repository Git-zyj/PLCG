#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11121207564950966627ULL;
signed char var_3 = (signed char)114;
int var_5 = -550800084;
unsigned char var_8 = (unsigned char)0;
long long int var_9 = 1339901595696587069LL;
unsigned char var_10 = (unsigned char)180;
signed char var_11 = (signed char)98;
unsigned int var_13 = 276837833U;
int zero = 0;
int var_14 = -1958280916;
unsigned long long int var_15 = 10510228945971346796ULL;
unsigned char var_16 = (unsigned char)122;
long long int var_17 = 3582289347060083830LL;
long long int var_18 = 7425460052902323424LL;
unsigned long long int arr_0 [20] ;
long long int arr_1 [20] ;
_Bool arr_2 [20] ;
int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 17259070238428054504ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2946547349818648411LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 385671638;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
