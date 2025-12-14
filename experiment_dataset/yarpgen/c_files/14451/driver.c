#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1172855316;
long long int var_2 = -5276892238492403816LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -3772868014274627768LL;
unsigned char var_6 = (unsigned char)153;
unsigned char var_7 = (unsigned char)41;
_Bool var_10 = (_Bool)1;
long long int var_14 = -127287572184363634LL;
short var_17 = (short)13944;
unsigned char var_18 = (unsigned char)71;
int zero = 0;
signed char var_19 = (signed char)61;
long long int var_20 = 3570766231804283840LL;
unsigned char var_21 = (unsigned char)239;
long long int var_22 = -484608802120980732LL;
short arr_3 [25] [25] [25] ;
int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)21288;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 1384154143;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
