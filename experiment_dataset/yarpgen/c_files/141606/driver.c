#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 393838627010969544LL;
unsigned char var_1 = (unsigned char)222;
_Bool var_5 = (_Bool)1;
long long int var_6 = 2545000577822298411LL;
long long int var_8 = -4754313621581254614LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3540155959U;
unsigned int var_12 = 2351702350U;
long long int var_13 = 8987515860465146111LL;
unsigned int var_14 = 3347726537U;
int arr_0 [12] [12] ;
long long int arr_1 [12] ;
long long int arr_2 [12] ;
int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -1461155659;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 4039511215650627738LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 8910997088386760504LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1698730011;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
