#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20454;
signed char var_1 = (signed char)-107;
long long int var_2 = -1159777983758709962LL;
long long int var_3 = -5004498998981334411LL;
_Bool var_4 = (_Bool)1;
short var_7 = (short)-23496;
unsigned int var_8 = 2892360185U;
int var_9 = 785761104;
int var_11 = 81804643;
unsigned short var_12 = (unsigned short)36562;
unsigned short var_16 = (unsigned short)31910;
int zero = 0;
unsigned long long int var_17 = 3321039216472641430ULL;
unsigned char var_18 = (unsigned char)146;
unsigned short var_19 = (unsigned short)23614;
_Bool var_20 = (_Bool)0;
int var_21 = -1445019936;
signed char var_22 = (signed char)-6;
unsigned long long int var_23 = 8862627012551111746ULL;
signed char var_24 = (signed char)120;
int var_25 = -530150576;
unsigned int var_26 = 651758454U;
unsigned long long int var_27 = 15423136042902080546ULL;
unsigned short var_28 = (unsigned short)23826;
unsigned char arr_3 [19] [19] ;
signed char arr_5 [19] [19] [19] [19] ;
signed char arr_6 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)98;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
