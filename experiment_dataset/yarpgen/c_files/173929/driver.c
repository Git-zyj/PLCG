#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8948;
long long int var_5 = -4888813943993413037LL;
unsigned int var_8 = 245763970U;
short var_9 = (short)27724;
unsigned int var_10 = 255108852U;
unsigned int var_12 = 42612593U;
long long int var_15 = -6756522271582278489LL;
int zero = 0;
unsigned char var_19 = (unsigned char)87;
short var_20 = (short)21851;
unsigned char var_21 = (unsigned char)11;
long long int var_22 = -4335517632477317235LL;
unsigned char var_23 = (unsigned char)129;
unsigned long long int var_24 = 4554798419572484842ULL;
unsigned short arr_0 [12] ;
unsigned int arr_1 [12] ;
unsigned short arr_3 [24] [24] ;
unsigned short arr_4 [24] ;
short arr_5 [24] ;
unsigned char arr_6 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)15958;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 641699137U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)10743;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)47920;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)4176;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)16;
}

void checksum() {
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
