#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14363;
_Bool var_1 = (_Bool)1;
short var_3 = (short)29296;
signed char var_4 = (signed char)-18;
unsigned int var_5 = 2181840953U;
short var_6 = (short)18503;
signed char var_7 = (signed char)-77;
signed char var_8 = (signed char)-32;
signed char var_9 = (signed char)-16;
signed char var_10 = (signed char)-65;
int zero = 0;
unsigned int var_11 = 736518646U;
short var_12 = (short)-8096;
signed char var_13 = (signed char)92;
short var_14 = (short)-21792;
signed char var_15 = (signed char)-36;
short var_16 = (short)-418;
unsigned int var_17 = 3786480272U;
unsigned int var_18 = 2464432250U;
unsigned int var_19 = 430841249U;
unsigned int arr_0 [24] ;
signed char arr_1 [24] [24] ;
unsigned int arr_5 [17] [17] ;
unsigned short arr_6 [17] [17] ;
unsigned int arr_7 [17] ;
short arr_2 [24] ;
int arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 609573077U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 1281104004U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)8480;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 2468276572U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)21195;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 1610670638;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
