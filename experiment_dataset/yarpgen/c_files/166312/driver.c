#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5932846640667900674LL;
signed char var_1 = (signed char)38;
unsigned short var_5 = (unsigned short)16252;
int var_6 = 978024158;
unsigned int var_8 = 2670253952U;
short var_9 = (short)-6521;
unsigned char var_10 = (unsigned char)115;
unsigned short var_11 = (unsigned short)20825;
unsigned int var_13 = 2950749692U;
int var_14 = -393714016;
int zero = 0;
unsigned char var_16 = (unsigned char)4;
short var_17 = (short)-25050;
long long int var_18 = 1026871574871608129LL;
_Bool var_19 = (_Bool)0;
long long int arr_6 [13] [13] [13] ;
long long int arr_9 [13] [13] ;
unsigned int arr_10 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 553556791580059103LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = -7098892419243870818LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1813356878U : 2275237167U;
}

void checksum() {
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
