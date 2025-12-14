#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 764496008840824828LL;
unsigned short var_3 = (unsigned short)54038;
int var_4 = -7992581;
unsigned long long int var_5 = 13334129226658927390ULL;
int var_6 = 1154190493;
unsigned int var_7 = 2810898209U;
unsigned int var_10 = 731688571U;
int zero = 0;
int var_13 = 410022813;
unsigned long long int var_14 = 5122596795907480442ULL;
unsigned short var_15 = (unsigned short)16898;
int var_16 = 1641916737;
unsigned int var_17 = 3613719513U;
unsigned int var_18 = 256149450U;
long long int var_19 = -871600994512937833LL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 4796345405215762296ULL;
_Bool arr_4 [10] [10] [10] ;
unsigned long long int arr_6 [10] [10] [10] [10] ;
signed char arr_7 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 15808128928035387899ULL : 1288742202971305663ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)85 : (signed char)-116;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
