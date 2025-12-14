#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1657999722;
unsigned long long int var_3 = 15050197053661111843ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-78;
unsigned char var_7 = (unsigned char)52;
unsigned char var_9 = (unsigned char)1;
long long int var_10 = -1692144057463283601LL;
unsigned long long int var_11 = 17816991604633403393ULL;
signed char var_12 = (signed char)-95;
short var_13 = (short)-9528;
unsigned int var_15 = 810738620U;
int var_16 = -1978635068;
int zero = 0;
unsigned long long int var_18 = 6358536500853519987ULL;
unsigned long long int var_19 = 2902128714759752479ULL;
unsigned long long int var_20 = 15763844814947398677ULL;
unsigned long long int var_21 = 7110980013336075912ULL;
long long int var_22 = 6484416870690333666LL;
signed char var_23 = (signed char)-49;
short var_24 = (short)-23330;
int var_25 = 45423583;
int var_26 = -1406947189;
int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned long long int arr_3 [10] [10] ;
unsigned int arr_4 [10] ;
unsigned long long int arr_5 [10] ;
unsigned long long int arr_7 [10] [10] [10] ;
unsigned long long int arr_8 [10] [10] [10] [10] [10] ;
int arr_9 [10] ;
signed char arr_10 [10] [10] [10] [10] ;
_Bool arr_11 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1596346500;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 7855997832046498130ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 18230318090664403342ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 269992635U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 6312382657856805632ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4619571874388128609ULL : 3620566237017312792ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 5091160946963249536ULL : 1592065084875784718ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 883548056;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)33 : (signed char)59;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
