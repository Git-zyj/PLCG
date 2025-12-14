#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9486019120993082075ULL;
unsigned long long int var_5 = 8405766847393963596ULL;
unsigned char var_7 = (unsigned char)115;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1561537009U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 10512908742484064288ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2897305147U;
unsigned int var_20 = 1243613537U;
unsigned int var_21 = 3560061857U;
unsigned short var_22 = (unsigned short)53438;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 11528208040181352114ULL;
short arr_0 [14] ;
unsigned int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)28458;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 2973458515U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
