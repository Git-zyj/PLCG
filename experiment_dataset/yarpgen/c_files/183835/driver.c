#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 145784064U;
unsigned long long int var_1 = 12423320794854350467ULL;
long long int var_2 = -4087764478549854766LL;
unsigned short var_3 = (unsigned short)48833;
int var_4 = -1266454905;
unsigned long long int var_5 = 16288655001139623570ULL;
unsigned char var_6 = (unsigned char)168;
unsigned long long int var_7 = 6294194114757506704ULL;
unsigned short var_8 = (unsigned short)22189;
unsigned short var_9 = (unsigned short)24045;
int zero = 0;
short var_10 = (short)10243;
long long int var_11 = 4635488959098922923LL;
unsigned short var_12 = (unsigned short)20843;
long long int var_13 = -396664413887065305LL;
unsigned short arr_4 [16] [16] [16] ;
unsigned short arr_7 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)17539;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)23569 : (unsigned short)51090;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
