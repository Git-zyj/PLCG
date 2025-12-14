#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4214069189851142506LL;
unsigned short var_2 = (unsigned short)12313;
unsigned int var_3 = 1209271080U;
unsigned char var_4 = (unsigned char)204;
short var_5 = (short)13523;
_Bool var_6 = (_Bool)0;
short var_7 = (short)10038;
unsigned char var_8 = (unsigned char)222;
long long int var_9 = -9122519174338282783LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 6074394076781938351LL;
signed char var_12 = (signed char)82;
int var_13 = 2018597330;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1542908000172027385LL;
unsigned long long int var_17 = 8482549327520649288ULL;
int var_18 = -562476340;
long long int var_19 = 3718041734581893824LL;
_Bool arr_0 [14] ;
int arr_2 [14] [14] ;
signed char arr_3 [25] ;
unsigned char arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1523529902 : -796587294;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)112;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
