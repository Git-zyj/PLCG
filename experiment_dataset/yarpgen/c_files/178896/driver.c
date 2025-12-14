#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7387510455466923836LL;
unsigned int var_7 = 2079366166U;
int var_8 = 2116834136;
long long int var_11 = 9161525306234519431LL;
_Bool var_12 = (_Bool)0;
signed char var_18 = (signed char)53;
int zero = 0;
short var_20 = (short)6656;
unsigned int var_21 = 3856349619U;
signed char var_22 = (signed char)64;
_Bool var_23 = (_Bool)1;
unsigned long long int arr_0 [15] ;
long long int arr_1 [15] ;
signed char arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 4172328982110164720ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5703953056615221416LL : 8412966763493437749LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-4 : (signed char)70;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
