#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18281911898196467915ULL;
long long int var_3 = 2355538359903965254LL;
unsigned int var_5 = 3288640189U;
unsigned char var_6 = (unsigned char)223;
signed char var_12 = (signed char)-59;
int zero = 0;
int var_18 = -1243496360;
unsigned long long int var_19 = 17274607426381175952ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)44;
int var_22 = -527594126;
long long int var_23 = -4434309718579697821LL;
unsigned short var_24 = (unsigned short)35617;
_Bool var_25 = (_Bool)0;
int var_26 = -1219812696;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 4167804481U;
signed char arr_1 [17] ;
_Bool arr_3 [17] ;
long long int arr_5 [21] ;
signed char arr_6 [21] ;
long long int arr_7 [25] ;
int arr_9 [25] [25] ;
unsigned long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -1352732506453592953LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 4875244517040675575LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = -521726542;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 353369796449623114ULL;
}

void checksum() {
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
