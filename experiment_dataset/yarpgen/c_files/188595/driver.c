#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5395878898494734507ULL;
unsigned short var_2 = (unsigned short)25599;
int var_3 = -474270494;
unsigned int var_4 = 615801267U;
unsigned char var_5 = (unsigned char)192;
int var_8 = 1416386051;
unsigned char var_9 = (unsigned char)242;
unsigned long long int var_10 = 12630740473196209335ULL;
unsigned char var_11 = (unsigned char)210;
unsigned char var_12 = (unsigned char)102;
unsigned long long int var_13 = 9205509882609949709ULL;
int var_14 = -1264429196;
int zero = 0;
int var_15 = 1990867443;
long long int var_16 = 2384679403319484766LL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)23777;
unsigned int var_19 = 3703657401U;
signed char var_20 = (signed char)-24;
unsigned short var_21 = (unsigned short)487;
unsigned long long int var_22 = 1688089688210592059ULL;
unsigned int var_23 = 4003217759U;
unsigned short var_24 = (unsigned short)25926;
unsigned long long int var_25 = 18076280470045573706ULL;
long long int arr_0 [19] [19] ;
unsigned long long int arr_3 [19] [19] ;
unsigned short arr_5 [19] [19] [19] [19] ;
_Bool arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -519632604794372565LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 15353664455853766049ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)64594;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
