#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2567578803046700577LL;
_Bool var_3 = (_Bool)0;
int var_5 = -475991887;
_Bool var_7 = (_Bool)1;
long long int var_8 = -6253473308887094205LL;
_Bool var_9 = (_Bool)1;
int var_10 = 75474340;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
long long int var_15 = 4390306720615239071LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
int var_23 = -1793111326;
long long int var_24 = -8285635096118658200LL;
_Bool var_25 = (_Bool)0;
int var_26 = -75582080;
int arr_1 [24] ;
int arr_2 [24] [24] ;
_Bool arr_3 [24] [24] [24] ;
_Bool arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -507199991;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -1374907481;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
