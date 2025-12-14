#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
unsigned long long int var_1 = 155178066377801973ULL;
unsigned int var_4 = 3462491514U;
long long int var_5 = 6129318856818385574LL;
unsigned char var_15 = (unsigned char)136;
unsigned char var_18 = (unsigned char)78;
int zero = 0;
long long int var_20 = -1263262011534154314LL;
short var_21 = (short)-31428;
short var_22 = (short)11768;
unsigned long long int var_23 = 14374276661249875910ULL;
signed char var_24 = (signed char)60;
unsigned char arr_1 [11] ;
unsigned short arr_3 [11] ;
signed char arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)38101;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)-4;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
