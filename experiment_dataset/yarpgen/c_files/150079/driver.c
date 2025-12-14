#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29996;
short var_3 = (short)22242;
unsigned short var_4 = (unsigned short)21730;
long long int var_9 = -1853958759977458512LL;
short var_10 = (short)-24324;
long long int var_11 = -1307030301317940496LL;
long long int var_12 = -8525368669104423867LL;
_Bool var_13 = (_Bool)0;
short var_15 = (short)5467;
short var_16 = (short)18163;
long long int var_17 = -2933095723062006452LL;
int zero = 0;
unsigned short var_18 = (unsigned short)4108;
unsigned int var_19 = 2541660680U;
long long int var_20 = 4727649045349893187LL;
unsigned short var_21 = (unsigned short)25094;
short var_22 = (short)26950;
unsigned int var_23 = 46201107U;
_Bool var_24 = (_Bool)0;
long long int arr_0 [10] [10] ;
short arr_1 [10] ;
unsigned short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 8418094305484053933LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-13290;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20033 : (unsigned short)4276;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
